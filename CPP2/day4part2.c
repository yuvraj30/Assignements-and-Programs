#include<stdio.h>
#include<stdlib.h>
// int *fun(){

//     static int y=10;
//     return &y;
int addition(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    return a+b;
}
int multiply(){
      int d,c;
    printf("enter the value of d and c ");
    scanf("%d%d",&d,&c);
    return d*c;

}
int main(){

// int x=10;
// int *ptr=&x;
// printf("*ptr=%d  ptr=%d  &x=%d",*ptr,ptr,&x);
// return 0;

// int *ptr=NULL;
// printf("the value of ptr is :%x",ptr);

// int *ptr=(int *)malloc(sizeof(int));
// int a=50;
// ptr=&a;
// printf("%d  %d \n",ptr,*ptr);
// free(ptr);
// printf("%d  %p \n",ptr,*ptr);
// ptr=NULL;
// printf("%d  %p \n",ptr,*ptr);


// int a=10,b=20,*p1=&a,*p2=&b;
// printf("values before swapping are %d and %d \n",a,b);
// *p1=*p1+*p2;
// *p2=*p1-*p2;
// *p1=*p1-*p2;
// printf("values after swapping are %d and %d ",*p1,*p2);



// char *str;
// {
//     char a='A';
//     str=&a;

// }//a fall out of scope
// //str is now a dangling pointer
// printf("%c",*str);
// int *p=fun();
// printf("%d",*p);




// int arr[5]={1,2,2,4,5};
// int *p=arr;
// int i;
// printf("printing array elements  ");
// for(i=0;i<5;i++)
// printf("%d ",*(p+i));

int result;
int (*ptr)();
ptr=&addition;
result=(*ptr)();
printf("sum is %d\n",result);
ptr=&multiply;
result=(*ptr)();
printf("product is %d",result);

    return 0;
}