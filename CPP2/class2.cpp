#include <iostream>

using namespace std;

class Line
{

    int size;

    Line()
    {

        size = 30;

        cout << "Line size is  " << size << " m" << endl;
    }

public:
    static Line fun()
    {

        static Line *l;

        if (l == NULL)
        {

            Line s;

            l = &s;
        }

        else
        {

            cout << "Already Present" << endl;
        }

        return *l;
    }

    void inCM()
    {

        int sizecm = size * 100;

        cout << "In centimeters" << sizecm << endl;
    }
};

int main()
{

    Line L = Line::fun();

    L.inCM();

    L.fun();

    return 0;
}