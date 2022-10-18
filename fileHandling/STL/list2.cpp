#include <iostream>
#include <iterator>
#include <list> // for std::list elements
using namespace std;
void showTheContent(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

int main()
{
    list<int> list1, list2;
    int i;
    for (i = 0; i < 10; i++)
    {
        list1.push_back(i + 1);
        list2.push_front(i + 1);
    }

    cout << "content of the first list is :";
    showTheContent(list1);
    cout << "content of the second list is :";
    showTheContent(list2);
    int times = 5;
    while (times--)
    {
        list1.pop_front();
    }
    cout << "content of the first list is :";
    showTheContent(list1);
    times = 5;
    while (times--)
    {
        list2.pop_back();
    }
    cout << "content of the second list is :";
    showTheContent(list2);

    cout << list1.front() << " is now at the beginning of the list 1" << endl;
    cout << list2.front() << " is now at the beginning of the list 2" << endl;

    list1.insert(list1.begin(), 5, 10);
    cout << "content of the first list after insertion is :";
    showTheContent(list1);

    list1.remove(10);
    cout << "content of the first list after removal is :";
    showTheContent(list1);
    cout << "no of elements in the list 1 :";
    cout << list1.size() << endl;

    list2.reverse();
    cout << "reversed list 2 :";
    showTheContent(list2);

    list2.erase(list2.begin());
    cout << "content of the  list 2 after erase is :";
    showTheContent(list2);

    list1.clear();
    if (list1.empty())
        cout << "list1 is empty \n";
    else
        cout << "list1 is not empty \n";

    list1.assign(5, 2);
    cout << "content of the first list after assignment is :";
    showTheContent(list1);
    return 0;
}
