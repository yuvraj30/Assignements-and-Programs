#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top=-1;
//Push Function
void push(int data){
    if(top==MAX-1)
    {
    printf("Stack overflow\n");
    return;
    }
    top=top+1;
    stack_arr[top]=data;
}
//Pop  FUnction
int pop(){
    int value=stack_arr[top];
    top=top-1;
    return value;
    printf("\n");
}
void display(){
    for(int i=0;i<=top;i++){
    printf("%d ",stack_arr[i]);
  }
  printf("\n");
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);

    display();

   printf("popped element is %d \n",pop());
   display();
  
  

    return 0;
}