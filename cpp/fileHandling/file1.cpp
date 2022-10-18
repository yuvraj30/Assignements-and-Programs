#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("yuvraj.txt", ios::out); // write mode
    if (myFile.is_open())
    {
        myFile << "hello\n";
        myFile << "this is second line\n";
        myFile.close();
    }
    myFile.open("yuvraj.txt", ios::app); // append mode
    if (myFile.is_open())
    {
        myFile << "hello2\n";
        myFile << "this is 4th line\n";
        myFile.close();
    }
