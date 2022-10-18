#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s = {10, 12, 15, 16};
    set<int>::iterator it;
    cout << "first element is " << *(s.begin()) << endl;
    cout << "last element is " << *--(s.end()) << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    if (s.empty())
        cout << "set is empty" << endl;
    else
        cout << "not empty" << endl;
    cout << "size of the set is " << s.size() << endl;
    cout << "max size is " << s.max_size() << endl;

    s.erase(s.begin());
    s.erase(12);

    cout << "after removing the first element and traversing " << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    s.insert(16);
    cout << "inserting the new element 16 :";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    if (s.count(15) == 1)
        cout << endl
             << "15 is present in the set\n";
    else
        cout << endl
             << "15 is not present in the set";
    s.clear();
    if (s.empty())
        cout << "set is empty" << endl;
    else
        cout << "not empty" << endl;
    return 0;
}
