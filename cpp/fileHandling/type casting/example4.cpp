#include <iostream>
using namespace std;
struct mystruct
{
    int x, y;
    char c;
    bool b;

} s;

int main()
{
    s.x = 5;
    s.y = 10;
    s.c = 'A';
    s.b = true;
    int *p = reinterpret_cast<int *>(&s);
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p++;
    char *ch = reinterpret_cast<char *>(p);
    cout << *ch << endl;
    ch++;
    bool *n = reinterpret_cast<bool *>(ch);
    cout << *n << endl;
    cout << *(reinterpret_cast<bool *>(ch)) << endl;

    cout << sizeof(s) << endl;
    return 0;
}