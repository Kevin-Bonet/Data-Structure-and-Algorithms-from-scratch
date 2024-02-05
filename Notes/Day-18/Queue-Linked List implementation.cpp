/*Array implementation
what if full?
then we say its full or copy data into new, bigger array, O(n)
using linked list:
    front/head enqueue and rear/tail dequeue have to be O(1), 
    which is problematic due to accessing tail/rear taking O(n)
    we fix it by having front and rear pointers holding addresses from the start
*/

struct Node{
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;
void Enqueue(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
void Dequeue(){
    struct Node* temp = front;
    if(front == rear) return;
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
}
/*actual implementation is incomplete and is left as homework*/