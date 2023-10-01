#include <iostream>

using namespace std;

int main()
{
    /*
    Pointer is passed by reference, so that if the value of the pointer changes, the variable will change too.
    */
    
    int *num1 = new int(11);
    int *num2 = num1;

    *num1 = 22;

    cout << "num1: " << *num1 << endl;
    cout << "num2: " << *num2 << endl;
}