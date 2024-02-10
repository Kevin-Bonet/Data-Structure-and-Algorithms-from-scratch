#include<iostream>
using namespace std;
struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

int FindMin(BstNode* root){
    if(root == NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    cout<<root->data;
    cout<<"\n";
    return root->data;
}

int FindMinRecursive(BstNode* root){
    if(root == NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    else if(root->left == NULL){
        cout<<root->data;
        cout<<"\n";
        return root->data;
    }
    return FindMinRecursive(root->left);
}

int FindMax(BstNode* root){
    if(root == NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }
    cout<<root->data;
    cout<<"\n";
    return root->data;
}

int FindMaxRecursive(BstNode* root){
    if(root == NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    else if(root->right == NULL){
        cout<<root->data;
        cout<<"\n";
        return root->data;
    }
    return FindMaxRecursive(root->right);
}

BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data; // or (*newNode).data = data; 
    newNode->left = newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left, data);
    }
    else{
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(BstNode* root, int data){
    if(root==NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

int main(){
BstNode* root = NULL; //creating an empty tree
root = Insert(root, 15);
root = Insert(root, 10);
root = Insert(root, 20);
root = Insert(root, 25);
root = Insert(root, 8);
root = Insert(root, 12);
FindMin(root);
FindMax(root);
FindMinRecursive(root);
FindMaxRecursive(root);
int number;
cout<<"Enter number to be searched (try 15,10,20,25,8, or 12)\n";
cin>>number;
if(Search(root,number) == true) cout<<"Found\n";
else cout<<"Not Found\n";
}