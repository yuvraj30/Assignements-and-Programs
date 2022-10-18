#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> string_set{"iphone", "ios", "android", "basic", "cartoon"};
    set<char> char_set{'a', 'b', 'c', 'd', 'e', 'f'};
    set<int> int_set{5, 3, 2, 4, 5};
    for (int i = 0; i < 4; i++)
    {
        int_set.insert('a' + i);
    }

    cout << "string_set size :" << string_set.size() << endl;
    cout << "char_set size :" << char_set.size() << endl;
    return 0;
}