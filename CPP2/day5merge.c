#include <stdio.h>
#include <stdlib.h>
struct node
{
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

struct node* concat(struct node *head,struct node *next){
    while(head->link!=NULL){
        head=head->link;
    }
    head->link=next;
    return head;
}
int main(){
    struct node *head1=malloc(sizeof(struct node));
    head1->data=1;
    head1->link=NULL;

InsertAtEnd(head1,8);
InsertAtEnd(head1,11);


 struct node *next1=malloc(sizeof(struct node));
    next1->data=3;
    next1->link=NULL;

InsertAtEnd(next1,5);
InsertAtEnd(next1,7);



display(head1);
display(next1);
concat(head1,next1);
display(head1);

}