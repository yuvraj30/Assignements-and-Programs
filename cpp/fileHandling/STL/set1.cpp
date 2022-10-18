#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> string_set{"iphone", "ios", "android", "basic", "cartoon"};
    set<char> char_set{'a', 'b', 'c', 'd', 'e', 'f'};
    set<int> int_set{5, 3, 2, 4, 5};
    for (auto kt = string_set.begin(); kt != string_set.end(); kt++)
        cout << " " << *kt;
    for (auto kt = char_set.begin(); kt != char_set.end(); kt++)
        cout << " " << *kt;
    for (auto kt = int_set.begin(); kt != int_set.end(); kt++)
        cout << " " << *kt;
    return 0;
}