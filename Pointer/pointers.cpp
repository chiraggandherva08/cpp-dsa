#include<iostream>
using namespace std;

int main () {
    // Intro to pointers //
    // Address of a variable using 'address of Operator (&)'.
    // Pointers stored address of another variable.
    // all takes: 8 byte memory.

    /* Addresses are temperary and changes after each programme execution. */
    // int pointer.
    int numInt = 100;
    int* addressInt = &numInt;

    cout << "Address of num1 is: " << addressInt << endl; // addresses are stored in hexadecimal format.
    cout << "Value at " << addressInt << " is: " << *addressInt << endl; // * operator is called derefference operator

    // float pointer.
    float numFloat = 1.001f;
    float* addressFloat = &numFloat;

    // char pointer.
    char ch = 'a';
    char* charptr = &ch;

    // string pointer.
    string name = "chirag gandherva";
    string* nameAddress = &name;

    int arr[] = {1, 2, 2, 4};
    int* addressArr[] = {arr};

    long double s;
    cout << sizeof(s) << endl;

    return 0;
}
