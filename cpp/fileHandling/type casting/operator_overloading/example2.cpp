#include <iostream>
using namespace std;
class Overload
{
private:
    int a;
    int b;

public:
    Overload() : a(0), b(0) {}
    void in()
    {
        cout << "enter a" << endl;
        cin >> a;
        cout << "enter b" << endl;
        cin >> b;
    }
    void operator--()
    {
        a = --a;
        b = --b;
    }
    void out()
    {
        cout << "decrement elements of object" << a << b << endl;
    }
};
int main()
{
    Overload obj;
    obj.in();
    --obj;
    obj.out();
}