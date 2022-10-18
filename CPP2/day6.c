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
}
int main(){
    push(1);push(2),push(3),push(4),push(5);
    printf("%d\n",top);
  for(int i=0;i<=top;i++){
    printf("%d",stack_arr[i]);
  }
  printf("\n");
  int data=pop();
  for(int i=0;i<=top;i++){
    printf("%d",stack_arr[i]);
  }
  printf("   deleted data  %d",data);
    return 0;
}