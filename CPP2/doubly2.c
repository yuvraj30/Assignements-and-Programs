#include<stdio.h>
#include<stdlib.h>
struct  node{
    struct node *prev;
    int data;
    struct node *next;
};
//To display the list
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d  ", head->data);
        head = head->next;
    }
    printf("\n");
}
//Make the doubly list
struct node* addToEmpty(struct node* head, int data){
struct node *temp=malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=data;
temp->next=NULL;
head=temp;
return head;
} 
struct node* InsertAtBeginning(struct node* head,int data){
struct node *temp=malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=data;
temp->next=head;
head->prev=temp;
head=temp;
return head;}
// //Delete from Beginning

struct node* DeleteFromBeginning(struct node* head){
     head=head->next;
     free(head->prev);
     head->prev=NULL;
     return head;
}
int main(){
struct node *head=NULL;
head=addToEmpty(head,50);
head=InsertAtBeginning(head,40);
head=InsertAtBeginning(head,60);
head=InsertAtBeginning(head,70);
display(head);
DeleteFromBeginning(head);

}