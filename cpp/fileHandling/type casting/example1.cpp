#include <iostream>
using namespace std;
int main()
{
    int num_int = 9;

    double num_double;
    num_double = num_int;

    cout << "Num_int =" << num_int << endl;
    cout << "Num_double =" << num_double << endl;

    double num_double = 3.256;
    cout << "Num_double =" << num_double << endl;
    int num_int = num_double;
    cout << "Num_int =" << num_int << endl;
    return 0;
}