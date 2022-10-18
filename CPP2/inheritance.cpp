#include<iostream>
using namespace std;
class address{
    public:
    int hno;
    int pin;
    string locality;
};
class customer:public address{
   public:
    customer(){
        cout<<"enter hno ";
        cin>>hno;
    }
};
int main(){
   customer c1;
return 0;
}