#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    for (int i = 1; i <= 10; i++)
        a.push_back(i * 10);
    cout << "reference operator [g] : a[2] = " << a[2] << endl;
    cout << "at : a.at(4) = " << a.at(4) << endl;
    cout << "front() : a.front() = " << a.front() << endl;
    cout << "back() : a.back() = " << a.back() << endl;

    int *pos = a.data();

    cout << "first element is " << *pos << endl;
    return 0;
}