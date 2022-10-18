#include <iostream>
using namespace std;
void exceptionFunction()
{

    try
    {

        throw 0;
    }
    catch (int i)
    {
        cout << "\nIn function : Wrong Input :" << i;

        throw 5;
    }
}
int main()
{
    int var = 0;
    cout << "exception handling is bs ";
    try
    {
        exceptionFunction();
    }
    catch (int ex)
    {
        cout << "\nIN Main : Wrong Input : " << ex;
    }
}