#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* insertIntoBst(struct node* root,int data){
    if(root==NULL){
        root=newnode(data);
        return root;
    }
    if(data<root->data){
        root->right=insertIntoBst(root->right,data);

    }
    else{
        root->left=insertIntoBst(root->left,data); 
    }
}
void takeInput(struct node*root){
    int data;
    scanf("%d",&data);
    while(data !=-1){
        insertIntoBst(root,data);
        scanf("%d",&data);
    }
}
int mian(){
struct node* root=NULL;
 

}