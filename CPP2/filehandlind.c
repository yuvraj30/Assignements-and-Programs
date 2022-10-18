# include <stdio.h> // case 1 //fprintf use

int main( ){

FILE *fptr;
char str[100]="c programming language";

fptr=fopen("file1.txt","w");// content is over written

if(fptr==NULL)
printf("Error!!\n");

printf("enter the string: ");
scanf("%s",str);
// fprintf(fptr,"%s",str);
for(int i=0;str[i]!='\0';i++)
fputc(str[i],fptr);    // used to write single character at a time


// fputs(str,fptr);   //write a string to the specified file



fclose(fptr);
return 0;

}