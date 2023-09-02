#include <iostream>
using namespace std;

void printCharArr (char* p, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(p) << " ";
        p++;
    }
    cout << endl;
}

int main () {
    int nums[] = {1, 2, 3, 5, 4};
    int size = sizeof(nums)/sizeof(int);


    // different ways to get address of an array.
    int* ptr = nums; 
    int* ptr_ = &nums[0];

    cout << "Address of nums[] is " << nums << endl;
    cout << ptr << " & " << ptr_ << " are also the same addresses" << endl;

    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    
    for (int i = 0; i < size; i++) {
        cout << *ptr_ << " ";
        ptr_++;
    }
    cout << endl;

    char chs[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    printCharArr(chs, sizeof(chs)/sizeof(char));
    cout << chs << endl;
    return 0;
}