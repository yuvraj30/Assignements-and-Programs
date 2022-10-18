#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x > 0)
            throw x;
        else
            throw x;
    }
    catch (int x)
    {
        cout << "catch a integer and that integer is" << endl;
    }
    catch (char x)
    {
        cout << "catch a character and that character is" << endl;
    }
}
int main()
{
    test(0);
    test(4);

    return 0;
}