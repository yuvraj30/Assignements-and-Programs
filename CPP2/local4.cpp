#include <iostream>
using namespace std;
int fun()
{
    class test
    {
        public:
        void method()
        {
            cout << "local class method is called";
        }
    };
    test t;
    t.method();
}
int main()
{
    fun();
}