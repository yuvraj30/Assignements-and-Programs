#include<iostream>
using namespace std;

namespace first{
    const double pi=3.14;
    int x=5;
    int y=10;
    double value(){
        return 2*pi;
    }}


    namespace second{
        float epsilon=3.86;
        double x=5.69;
        double y=10.64;

        float value(){
            return 3*epsilon;
        }    }
        int main(){
            cout<<first::value()<<endl;
            using namespace first;
            cout<<x<<endl;
            cout<<y<<endl;

    
            
            cout<<second::x<<endl;
          
            
            return 0;
        }
