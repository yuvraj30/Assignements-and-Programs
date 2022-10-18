#include<stdio.h>
#include<string.h>
void display(char str[]){
    printf("entered string is :");
    puts(str);
}
int main(){
    //example 1
//     char ch[11]={'a','b','c','d'};
//     char ch2[11]="ksjnnsuw";
// printf("char array Value is: %s\n",ch);
// printf("string literal Value is: %s\n",ch2);


//example 2
// char name[20];
// printf("enter your name\n");
// scanf("%s",name);
// printf("your name is %s",name);



//example 3
// char str[50];
// printf("enter string\n");
// fgets(str,sizeof(str),stdin);
// printf("Name is ");
// puts(str);


//example 4
// char str[50];
// printf("enter your string\n");
// fgets(str,sizeof(str),stdin);
// display(str);



//example 5
// char name[]="Harry potter";
// printf("%c ",*name);
// printf("%c ",*(name+1));
// printf("%c \n",*(name+2));

// char *nameptr;
// nameptr=name;

// printf("%c ",*nameptr);
// printf("%c ",*(nameptr+1));
// printf("%c ",*(nameptr+5));



//example 6
// char str1[50]="Yuvraj";
// char str2[]=" Singh";

// strcat(str1,str2);
// puts(str1);
// printf("\n");
// puts(str2);



//example 7
// char str1[]="abfcd";
// char str2[]="abcd";
// int result=strcmp(str1,str2);

// if(result==1){
//     printf("strings are different\n");
// }
// else
//   printf("strings are same\n");


//example 8
// char str[100]="this is nobita, with doaremon";
// char *sub;
// sub=strstr(str,"nobita");
// printf("\nSubstring is: %s",sub);



//example 9
// char str[50]="yuvraj";
// char *sub=strupr(str);
// printf("to upper strin is %s",sub);



//example 10
// char str[20];
// printf("enter string ");
// gets(str);
// printf("entered string is %s",str);
// printf("\n reveresed string is %s",strrev(str));


return 0;
}
