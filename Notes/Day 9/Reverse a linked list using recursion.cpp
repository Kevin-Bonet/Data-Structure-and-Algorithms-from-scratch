//Using content from previous day, reverse print.
//In the earlier days there is information on how
//to not use a global variable, i want to look into that.
//Once again, recursion is incomprehensible.

#include<stdlib.h>  
#include<stdio.h>   

struct Node {   
    int data;   
    struct Node* next;   
};   

struct Node* head; 

void Reverse(struct Node* p) {  
    if(p->next == NULL) return;  {
        head = p;
        return;
    }
    Reverse(p->next);  
    
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
    
}   

struct Node* Insert(Node* head, int data) {   
    Node *temp = (struct Node*)malloc(sizeof(struct Node));   
    temp->data = data;   
    temp->next = NULL;   
    if (head == NULL) {  
        head = temp;  
    }  
    else {  
        Node* temp1 = head;  
        while(temp1->next != NULL) temp1 = temp1->next;  
        temp1->next = temp;  
    }  
    return head;  
}   

int main() {   
    head = Insert(head, 2);  
    head = Insert(head, 4);  
    head = Insert(head, 6);  
    head = Insert(head, 5);  
    Reverse(head);  
}