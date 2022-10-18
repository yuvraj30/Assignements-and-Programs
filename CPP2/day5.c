#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void display(struct node *head)
{
    while (head != NULL)
    {
    printf("%d   ", head->data);
    head = head->link;
    }
    printf("\n");
}
void InsertAtEnd(struct  node *head, int data){
struct  node *ptr, *temp;
ptr=head;
temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
while ((ptr->link!=NULL))
ptr=ptr->link;
ptr->link=temp;
}
struct node* reverse(struct node *head){
    struct node *prev=NULL;
    struct node *next=NULL;
    while(head!=NULL)
    {
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}



int main(){
struct  node *head=malloc(sizeof(struct  node));//Allocating memory size to node struct.
    head->data=45;//Give data of first node as value of 45
    head->link=NULL;
    InsertAtEnd(head,55);
    InsertAtEnd(head,65);
display(head);
head=reverse(head);
display(head);
return 0;
}