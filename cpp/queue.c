#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
}*front=NULL,*rear=NULL;

void enqueue(int n){
    struct node* temp;
    if(temp==NULL){
        printf("NO SPACE\n");
        exit(1);
    }
    temp=malloc(sizeof(struct node));
    temp->data=n;
    temp->link=NULL;
    if (rear==NULL)
    front=rear=temp;
    else{
        rear->link=temp;
        rear=temp;
    }
}
        int dequeue(){
        int data;
        struct node* temp;

        temp=front;
        data=temp->data;
        front=front->link;
        free(temp);
        temp=NULL;
        return data;
    }
    int isEmpty(){
        if (front==NULL)
        return 1;
        else
        return 0;
    }
    void print(){
        struct node* temp;
        temp=front;
        if(isEmpty())
        {
            printf("queue is empty\n");
            exit(1);
        }
        printf("Queue :\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }

int main(){
    enqueue(56);
    enqueue(89);
    // enqueue(75);
    // print();
    dequeue();
    print();
    return 0;
}