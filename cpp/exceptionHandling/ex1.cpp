#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a = 10;

    cout << a << endl;

    int b = 5;

    try
    {

        // if (b == 0)

        throw b;

        int x = a / b;

        cout << x << endl;
    }
    catch (float ex)
    {
        cout << "Error caught." << endl;
    }

    catch (...)
    {
        cout << "Default exception" << endl;
    }
    cout << "The End." << endl;
    return 0;
}
