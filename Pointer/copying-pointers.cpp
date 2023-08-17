#include <iostream>
using namespace std;

int main () {

    int num = 100;

    int* ptr1 = &num;
    int* ptr2 = ptr1;

    cout << (ptr1 == ptr2) << endl;
    cout << (*ptr1 == *ptr2) << endl;
    return 0;
}
