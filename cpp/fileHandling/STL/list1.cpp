#include <iostream>
#include <iterator>
#include <list> // for std::list elements
using namespace std;

void print(list<int> lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
        cout << *it << " ";
    cout << endl;
}
int main()
{
    list<int> lst1, lst2;
    for (int i = 0; i < 5; i++)
    {
        lst1.push_back(i);
        lst2.push_back(i + 5);
    }
    cout << "list 1 (list1) is :";
    print(lst1);
    cout << "list 2 (list2) is :";
    print(lst2);
    cout << "\n list1 front() :" << lst1.front() << endl;
    cout << "\n list1 back() :" << lst1.back() << endl;
    cout << "\n list2 front() :" << lst2.front() << endl;
    cout << "\n list2 back() :" << lst2.back() << endl;
    cout << "list1.pop_front() : ";
    lst1.pop_front();
    print(lst1);
    cout << "list2.pop_back()  : ";
    lst2.pop_back();
    print(lst2);
    return 0;
}