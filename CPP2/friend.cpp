
#include<iostream>
using namespace std;
class A{
int x;
friend void fun(A);
};
void fun(A ob){
    ob.x=100;
    cout<<"x = "<<ob.x;
}
int main()
{
A ob1;
fun(ob1);
}