# include <stdio.h> // case 1 //fprintf use

int main( ){

FILE *fptr;

fptr=fopen("input.txt","r");// open read mode
char ch;
while(1)
{
    ch=fgetc(fptr);
    if(ch==EOF)
    break;
    printf("%c",ch);

}
fclose(fptr);
return 0;
}