#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    for (int i = 1; i <= 5; i++)
        a.push_back(i);
    cout << "size: " << a.size() << endl;

    cout << "\ncapacity :" << a.capacity();

    cout << "\nMax size: " << a.max_size();

    a.resize(4);
    cout << "\nsize :" << a.size();

    if (a.empty() == false)
    {
        cout << "\nvector is not empty";
    }
    else
    {
        cout << "\nvector is empty";
    }
    return 0;
}