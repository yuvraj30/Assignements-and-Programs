#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<int, map<int, string>> nested_map;
    nested_map[1][1] = "one";
    nested_map[1][2] = "two";
    nested_map[2][1] = "three";
    nested_map[2][2] = "four";
    map<int, map<int, string>>::iterator it;
    map<int, string>::iterator it2;
    for (it = nested_map.begin(); it != nested_map.end(); it++)
        for (it2 = it->second.begin(); it2 != it->second.end(); it2++)
        {
            cout << it->first << " " << it2->first << " " << it2->second << endl;
        }
    cout << endl;
}