#include<iostream>
using namespace std;
int main(){

int a=20;
int *p=&a;
int **p1=&p;
cout<<p<<" "<<*p<<" "<<a<<" "<<**p1<<" "<<*p1;
    return 0;

}