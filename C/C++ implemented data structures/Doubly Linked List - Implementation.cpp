#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head; // global

struct Node* GetNewNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    (*newNode).data = x;
    (*newNode).prev = NULL;
    (*newNode).next = NULL;
    return newNode;
}

void InsertAtHead(int x) {
    struct Node* newNode = GetNewNode(x); //no the same newNode as one in GetNewNode
    if(head == NULL) {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void InsertAtTail(int x) {
    struct Node* newNode = GetNewNode(x); //no the same newNode as one in GetNewNode
    struct Node* last = head; 
    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    newNode->prev = last;
    return;

}

void Print() {
    struct Node* temp = head;
    printf("Forward: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint() {
    struct Node* temp = head;
    if(temp == NULL) return; //empty list, exit
    //going to last node
    while(temp->next != NULL) {
        temp = temp->next;
    }
    printf("Reverse: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
} 

int main() {
    head = NULL;
//    InsertAtHead(2); Print(); ReversePrint();
//    InsertAtHead(4); Print(); ReversePrint();
//    InsertAtHead(6); Print(); ReversePrint();

    InsertAtTail(2); Print(); ReversePrint();
    InsertAtTail(4); Print(); ReversePrint();
    InsertAtTail(6); Print(); ReversePrint();
}