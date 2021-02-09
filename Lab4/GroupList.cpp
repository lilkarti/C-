#include "GroupList.h"
//
//  GroupList.cpp
//  Lab4
//
//  Created by Tarek Abdelrahman on 2020-10-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student:
//  Write the implementation (and only the implementation) of the GroupList class below

// sets head to nullptr
GroupList :: GroupList() {
	head = NULL;
}

// deletes all list nodes, including all the ShapeList
// attached to each GroupNode
GroupList :: ~GroupList() {
	while (head) {
		GroupNode* pNextGroupNode = head->getNext();
                                    delete head;
		head = pNextGroupNode;
	}
	head = NULL;
}

// returns the head pointer
GroupNode* GroupList :: getHead() const {
	return head;
}

// sets the head pointer to ptr
void GroupList :: setHead(GroupNode* ptr) {
	head = ptr;
}

// inserts the node pointed to by s at the end of the list
void GroupList :: insert(GroupNode* s) {
	if (head == NULL) {
		setHead(s);
		return;
	}
	
	GroupNode* ptr = head;
	for (; ptr->getNext() != NULL; ptr = ptr->getNext());	
	ptr->setNext(s);
}

// removes the group with the name "name" from the list
// and returns a pointer to the removed GroupNode
// returns nullptr is name is not found on list
GroupNode* GroupList :: remove(string name) {
	GroupNode* ptr = head;
	GroupNode* prev = head;
	for (; ptr != NULL; ptr = ptr->getNext()) {
		if (ptr->getName() == name)
			break;
		prev = ptr;
	}
	
	if (ptr == NULL)
		return NULL;
		
	prev->setNext(ptr->getNext());	
	return ptr;
}

// prints the list, one GroupNode at a time
void GroupList :: print() const {
	cout << "drawing: " << endl;
	for (GroupNode* current = head; current != NULL; current = current->getNext())
		current->print();
}

