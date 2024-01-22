This implementation uses head as a global variable, the video also provides an alternative that doesn’t do this. This code works in a C++ compiler, a C compiler will give errors do to how variables need to have their type with them (struct Node*). 

 

#include<stdlib.h> 

#include<stdio.h> 

struct Node { 

int data; 

struct Node* next; 

}; 

struct Node* head; 

 

void Insert(int x) 

{ 

struct Node* temp = (Node*)malloc(sizeof(struct Node)); 

temp->data = x; 

temp->next = head; 

head = temp;  

} 

 

void Print() { 

struct Node* temp = head; 

printf("List is: "); 

while(temp != NULL) 

{ 

printf(" %d", temp->data); 

temp= temp->next; 

} 

printf("\n"); 

} 

 

int main() { 

head = NULL; 

printf("How many numbers?\n"); 

int n,i,x; 

scanf("%d", &n); 

for(i = 0; i<n; i++){ 

scanf("%d", &x); 

Insert(x); 

Print(); 

}  

} 

 

Confirmed working using https://www.onlinegdb.com/online_c_compiler 