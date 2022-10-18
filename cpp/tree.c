#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node* right;
};
struct node* createTree(){
    int input,data;
    struct node* newNode=malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&data);
    newNode->data=data;
    printf("left child of %d\n",newNode->data);
    newNode->left=createTree();
    printf("right child of %d\n",newNode->data);
    newNode->right=createTree();
    return newNode;
}

int main(){
    struct node* root=createTree();
    printf("%d ",root->data);
    printf("%d ",root->left->data);
    printf("%d ",root->right->data);
    return 0;
}