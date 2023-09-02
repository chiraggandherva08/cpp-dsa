#include <iostream>
using namespace std;

int main () {

    int* ptr = 0;
    cout << "Initial address of ptr is: " << ptr << endl;

    int num = 12;
    ptr = &num;
    cout << "Final address of ptr is: " << ptr << endl;
    return 0;
}