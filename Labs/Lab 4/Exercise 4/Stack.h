#pragma once

#include <iostream>

struct Stack {
	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
	
	void (*deletecb) (void *);

	void initialize() {
		head = 0;
		deletecb = 0;
	}
	
	
	void push(void* dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	void* pop() {
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	void setDeleteCallback ( void (*delcb) (void* pt) ){
		deletecb = delcb;


	}

	
	void cleanup() {
		while (head != nullptr) {
        Link* current = head;
        head = head->next;
        if (deletecb) {
            deletecb(current->data); 
        }
        delete current;
    }
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};
