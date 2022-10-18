#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<int, string> sample_map;
    sample_map.insert(pair<int, string>(1, "one"));
    sample_map.insert(pair<int, string>(2, "two"));
    map<int, string>::iterator it;
    for (it = sample_map.begin(); it != sample_map.end(); it++)
        cout << it->first << " " << it->second << endl;
    cout << endl;
    return 0;
}