#include<iostream>
using namespace std;
 typedef class {
    int value;
    public:
    void printvalues(){
        cout<<"parent"<<endl;
    }
}myclass;
typedef class:public myclass{
   int value;
    public:
   
    void printvalues(){
        cout<<"child"<<endl;
    }
}myclass2;
int main(){
    
    myclass2 obj2;
   myclass obj1;
  obj1.printvalues();
   obj2.printvalues();
}