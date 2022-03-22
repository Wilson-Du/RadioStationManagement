#include "LinkList.h"







int LinkList::size() {//number of nodes in the linklist
    int count = 0;
    Node* p_Node = head;
    while (p_Node) {
        p_Node = p_Node->next;
        count++;
    }
    return count;
}

void LinkList::add(void* p_data) {//add node to the linklist
    Node* p_new = new Node(p_data);
	if (head ==NULL) {
		head = p_new;
	}
	else {
		tail->next = p_new;
	}
	tail = p_new;
    
	
	
}



