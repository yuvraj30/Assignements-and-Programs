#include<stdio.h>
#include<stdlib.h>
struct node
{
    int priority;
    int data;
    struct node* link;
}*front,*rear=NULL;
int isEmpty(){
        if (front==NULL)
        return 1;
        else
        return 0;
    }
void display(){
        struct node* temp;
        temp=front;
        if(isEmpty())
        {
            printf("queue is empty\n");
            exit(1);
        }
        else{
        printf("Queue :\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        }
        printf("\n");
    }
void enqueue(int data,int priority)
{
    struct node* temp =NULL;
    struct node* newNode=malloc(sizeof(struct node));
    if (newNode==NULL){
        printf("memory is full\n");
        exit(1);
    }
    newNode->priority=priority;
    newNode->data=data;
    newNode->link=NULL;
    if(isEmpty()|| priority< front->priority)
    {
        newNode->link=front;
        front=newNode;
    }
    else
    {
        temp=front;
        while(temp->link !=NULL && temp->link->priority<=priority)
        temp=temp->link;
        newNode->link=temp->link;
        temp->link=newNode;
    
    }
}

        int dequeue(){
            struct node* temp;
        int data;
        temp=front;
        data=temp->data;
        front=front->link;
        free(temp);
        temp=NULL;
        return data;
    }
int main(){
    enqueue(35,5);
    enqueue(45,4);
    enqueue(55,2);
    enqueue(65,9);
    display();
    dequeue();
    display();


}