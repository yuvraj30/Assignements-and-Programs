#include <iostream>
using namespace std;

template <typename q>
q prod(q num1, q num2) {
    return (num1 * num2);
}

int main() {
    int result1;
    double result2;
   
    result1 = prod<int>(2, 3);
    cout << "product 1 = " << result1 << endl;

    
    result2 =prod<double>(2.2, 3.3);
    cout << "product 2 = " << result2 << endl;

    return 0;
}  