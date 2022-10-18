#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
}*top=NULL;
struct node* push(int data){
struct node *newNode;
newNode=malloc(sizeof(struct node));
newNode->data=data;
newNode->link=NULL;
newNode->link=top;
top=newNode;
return top;
}
void print(){
    struct node* temp;
    temp=top;
    printf("\nstack elements are :");
    while(temp){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
void pop(){
    if(top==NULL){
        printf("stack is empty ");
    }
    else {struct node* temp;
    temp=top;
    int val=temp->data;
    top=top->link;
    printf("\npopped data %d ",val);}
    

}
int main(){ 
    push(45);
    push(34);
    push(26);
    push(84);
    print();
    pop();
    print();
    

    return 0;

}