#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class LinkList//Queue link list
{
	friend class System;
private:
	Node* head;
	Node* tail;

public:

	LinkList() {
		head = NULL;
		tail = NULL;
	}
	~LinkList() {
		Node* temp;
		while (head != NULL) {
			temp = head;
			head = head->next;
			delete temp;
		}
	}
    int size();
    void add(void* p_data); 

};

