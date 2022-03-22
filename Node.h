#pragma once
#include <iostream>
using namespace std;

class Node
{
	friend class LinkList;
	friend class System;
private:
	void* data;//pointer points to any type
	Node* next;
public:

	
	Node(void* p_data) {
		data = p_data;
		next = NULL;
	}


	~Node() {
		if (data != NULL)
			delete data;
	}
};

