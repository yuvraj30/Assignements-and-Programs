#include<iostream>
#include<string.h>
using namespace std;
int main(){
   
   int a[3]={1,2,3};
   int b[3]={4,5,6};
  int c[9];
   for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
     c[i]=a[i]*b[j];
     cout<<c[i]<<" ";
     if(j==2)
     cout<<endl;
  }
//   for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//      c[i]=a[i]+b[j];
//      cout<<c[i]<<" ";
//      if(j==2)
//      cout<<endl;
//   }

  }

   }


