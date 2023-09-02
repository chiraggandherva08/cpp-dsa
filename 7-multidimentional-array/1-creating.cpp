#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr_1[3][2] = { {12, 10}, {100, 21}, {21, 43} }; // passing the size of the array and all the rows.
    int arr_2[][2] = { {10, 21}, {12, 111}, {24, 50} }; // passing the size of only the other dimentions.

    // not using braces.
    int arr_3[][3] = {
        10, 11, 21,
        20, 100, 32
    };

    // using double pointer to declare array.
    int** arr_4;
    arr_4 = new int*[3];

    // using single pointer.
    int* arr_5[2];
    arr_5[0] = new int[2];

    // using vector.
    vector<int> arr_6[3];
    arr_6->push_back(12);
    return 0;
}
