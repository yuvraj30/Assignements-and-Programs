#include<iostream>
using namespace std;

int operation(int a,int b){
return a*b;
}
double operation(double a,double b){
    return a+b;
}
int main()
{
cout<<"first function called : "<<operation(3,4)<<endl;

cout<<"second function called : "<<operation(7.40,4.0);



}