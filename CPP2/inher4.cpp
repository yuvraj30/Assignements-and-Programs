#include<iostream>
using namespace std;
class base{
    public:
    int x,y;
};

class derived1:public base {
   public:
    int data3;
    void sum(){
        cout<<x+y<<endl;;
    }
};
class derived2:public derived1{
    public:
void prod(){
    cout<<x*y<<endl;
}
};
int main(){
    derived1 obj;
    derived2 obj2;
    obj.x=10;
    obj.y=20;
     obj2.x=10;
    obj2.y=20;
obj.sum();
obj2.prod();
    
return 0;
}