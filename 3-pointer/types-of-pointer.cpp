#include <iostream>
using namespace std;

int main () {
    int* ptr;
    // 1 - wild pointer(uninitialized pointer -> Pointing to random address).
    cout << "Address of undefined pointer is " << ptr << endl; //0x102b60000 //0x100950000
    cout << "value of undefined pointer is " << *ptr << endl; //-231150456 //-164385656
    // can change the value at any location with the help of uninitialized pointer.
    *ptr = 10000;
    cout << "The new value of undefined pointer is " << *ptr << endl;


    // 2 - null pointer (pointing to no locatoin).
    // address of null pointer is 0x0.
    int* nullptr_ = 0;
    cout << nullptr_ << endl;
    // cout << *nullptr_ << endl; // will throw segmentation fault.

    int i;
    int* addressI = &i;
    cout << "Address of I is: " << addressI << endl;
    cout << "value of I is: " << *addressI << endl;
    return 0;
}
