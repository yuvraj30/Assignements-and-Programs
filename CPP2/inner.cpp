#include<iostream>
using namespace std;
class outside
{

    public:
    int a;
    class nested
    {
        public:
        static int x;
        static int y;
        int f();
        int g();
      
        nested(){
            cout<<"constructor of nested class ";

        }
    };
};

int outside::nested::x=5;
int outside::nested::f() {
    cout<<"this is the function of inner class ";
    return 0;};
typedef outside::nested outnest;
int outnest::y=10;
int outnest::g() {return 0;};


int main(){
  outside::nested obj;
// cout<<obj.x<<endl;
obj.f();

}