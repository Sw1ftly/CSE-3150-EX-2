#include <iostream>
#include "pointer_jump.h"


Node_List* initializeLinkedList(int n) {
    if (n <= 0) return nullptr; 
    
    Node_List *head = new Node_List(); 
    Node_List *current = head;
    for(int i = 1; i < n; i++) {
        current->next = new Node_List(); 
        current = current->next;
    }
    current->next = current; 
    return head; 
}
    
void pointer_jump(Node_List *head) {
    if (!head) return; 
    Node_List *last = head;

    while(last->next != last) {
        last = last->next;
    }
    Node_List *current = head;
    while(current != last) { 
        Node_List *temp = current->next;
        current->next = last; 
        current = temp; 
    }
}







