#include <iostream>
using namespace std;
int call_by_value(int a)
{
   a = a + 20;
   return a;
}
int call_by_ref(int &b)
{
   b = b + 20;
   return b;
}
int main()
{
   int a = 80;
   int b = 40;
   cout << "call by value " << call_by_value(a) << " " << a << endl;

   //  cout<<"call by reference "<<call_by_ref(b)<<" "<<b;
   cout << call_by_ref(b) << endl;
   cout << b;

   return 0;
}