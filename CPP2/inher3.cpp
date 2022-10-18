#include<iostream>
using namespace std;
class base{
    public:
    int data1;
};

class derived1:public base {
   public:
    int data3;
    void show(){
        cout<<"this is derived from base1 "<<endl;;
    }
};
class derived2:public derived1{
    public:
void show1(){
    cout<<"this is derived from derived1 class"<<endl;
}
};
int main(){
    derived1 obj;
    derived2 obj2;
    obj.data1=100;
obj.show();
obj2.show1();
    
return 0;
}