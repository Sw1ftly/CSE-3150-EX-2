#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "pointer_jump.h"


TEST_CASE("All nodes point to the last node") {
    int n = 5; 
    Node_List *head = initializeLinkedList(n); 
    pointer_jump(head); 

    Node_List* current = head;
    Node_List* last = nullptr;
    while(current != nullptr) {
        if(current->next == current) {
            last = current;
            break;
        }
        current = current->next;
    }

    current = head;
    while(current != last) {
        CHECK_EQ(current->next, last);
        current = current->next;
    }
    SUBCASE("10 elements, n=10"){
    int n = 10; 
    Node_List *head = initializeLinkedList(n); 
    pointer_jump(head); 

    Node_List* current = head;
    Node_List* last = nullptr;
    while(current != nullptr) {
        if(current->next == current) {
            last = current;
            break;
        }
        current = current->next;
    }

    current = head;
    while(current != last) {
        CHECK_EQ(current->next, last);
        current = current->next;
    }
    }
    SUBCASE("Single_element, n=1"){
        int n = 1; 
    Node_List *head = initializeLinkedList(n); 
    pointer_jump(head); 

    Node_List* current = head;
    Node_List* last = nullptr;
    while(current != nullptr) {
        if(current->next == current) {
            last = current;
            break;
        }
        current = current->next;
    }

    current = head;
    while(current != last) {
        CHECK_EQ(current->next, last);
        current = current->next;
    }
    }
}



