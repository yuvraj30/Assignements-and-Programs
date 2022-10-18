#include <iostream>
using namespace std;
class B
{
};
class D : public B
{
};
void f(B *pb, D *pd)
{
    D *pd2 = static_cast<D *>(pb); // Not safe,D can have fields and methods that are not in B.
    B *pb2 = static_cast<B *>(pd); // safe conversion D always contains all of B.
}

int main()
{
}