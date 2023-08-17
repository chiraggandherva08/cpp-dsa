#include <iostream>
using namespace std;

void leaders(int* arr, int N){
    int maxIndex = N-1;
    cout << arr[maxIndex] << " ";

    for(int i = maxIndex-1; i >= 0; i--)
    {
        if(arr[maxIndex] < arr[i])
        {
            cout << arr[i] << " ";
            maxIndex = i;
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {77, 10, 4, 10, 3, 6, 5, 2};
    leaders(arr, 8);
    return 0;
}