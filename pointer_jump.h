#ifndef _POINTER_JUMP_H_
#define _POINTER_JUMP_H_


struct Node_List {
    Node_List *next;
    Node_List():next(nullptr){}
};

Node_List* initializeLinkedList(int n);
void pointer_jump(Node_List *head);



#endif