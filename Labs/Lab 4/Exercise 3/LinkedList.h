#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
public:
    struct Link {
        int data;
        Link* next;

        Link(int data) : data(data), next(nullptr) {}
    };

    LinkedList(int initialData) {
        head = new Link(initialData);
    }

    void add(Link* l, int n) {
        if (!l || n <= 0) return;

        Link* current = l;
        for (int i = 0; i < n; ++i) {
            Link* newLink = new Link(i);
            newLink->next = current->next;
            current->next = newLink;
            current = newLink;
        }
    }

    void print() {
        Link* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void deleteLink(Link* link) {
        if (link) {
            deleteLink(link->next); 
            delete link;
        }
    }
    // deletes and cleans up the linked list memory
    void cleanup() {
        deleteLink(head);
        head = nullptr;
    }

    ~LinkedList() {
        cleanup();
    }

    // Member variable to store the head of the linked list
    Link* head;

};

#endif // LINKEDLIST_H



