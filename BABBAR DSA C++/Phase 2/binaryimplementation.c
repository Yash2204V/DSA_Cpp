#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void InOrder(struct Node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right); 
    }
}

int main(){
    struct Node* root = createNode(4);
    root->left = createNode(6);
    root->right = createNode(5);
    root->right->right = createNode(7);
    InOrder(root);
    return 0;
}
