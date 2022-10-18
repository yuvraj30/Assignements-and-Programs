#include<iostream>
using namespace std;
class a{
    public:
    class b{
        public:
        b(){
            cout<<"hello 1";
        }
    };
    
    class c:public b{
        int x=100;
        b y;
//a::b y2;
        c *y;
    };
};
int main(){

}