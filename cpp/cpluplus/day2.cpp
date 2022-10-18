#include<iostream>
using namespace std;
namespace first{
    int sum(int x,int y){
        return x+y;
    }
    }
   namespace second
   {
    int product(int x,int y){
        return x*y;
    }
   } 
   int main(){
    int x,y;
cout<<"enter value of x and y :"<<endl;
cin>>x,y;
cout<<"sum =  \n"<<first::sum(x,y);
cout<<"product ="<<second::product(x,y);

   }