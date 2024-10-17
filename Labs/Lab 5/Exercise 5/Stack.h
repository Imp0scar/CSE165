#pragma once

#include <iostream>

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
	
	

	void initialize() {
		head = nullptr;
	}

	Stack() {
        head = nullptr;
    }

	
	// Constructor to create a stack of N elements with incrementing values
    Stack(int N) {
        head = nullptr;
        for (int i = 0; i < N; i++) {
            push(1.0 + i * 0.1);
        }
    }

	void push(double dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek() {
		if (head == nullptr) {
			std::cout << "Stack is empty";
			return 0.0;
		}
		return head->data;
	}
	
	double pop() {
		if(head == nullptr)
			return 0.0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	~Stack(){
		while (head != nullptr){
			Link* current = head;
			head = head->next;
			std::cout << current->data << " ";
			delete current;
		}

	}

	
	void cleanup() {
		while (head != nullptr) {
        Link* current = head;
        head = head->next;
       delete current;
    }
		std::cout << "Stack is empty" << std::endl;
	}
};
