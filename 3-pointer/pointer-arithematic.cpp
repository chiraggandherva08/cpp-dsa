#include <iostream>
using namespace std;

int main () {
    int number = 1;
    int* i = &number;

    cout << i << endl;
    (*i)++;
    cout << number << endl;

    i++;
    cout << i << endl;
    (*i)++;

    cout << number << endl;
    cout << *i << endl;
    return 0;
}