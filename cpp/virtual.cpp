#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"display of base ";

    }
};
class derived : public base{
    public:
    void display(){
        cout<<"display of derived ";
    
    }

};
class derived2:public derived{
void display(){
    cout<<"display of derived 2";
}
};
int main(){
    // base *p= new derived2();
    // p->display();
    derived *q=new derived2();
    q->display();


}