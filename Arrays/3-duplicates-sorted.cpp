#include<iostream>
using namespace std;

void printArr(int* arr, int N){
    for(int i=0; i<N; i++)
        cout << arr[i] << " ";
        
    cout << endl;
}

void remove_duplicates(int* arr, int N){
    int res = 1;

    for(int i=1; i<N; i++)
        if(arr[i] != arr[res-1])
            arr[res++] = arr[i];
}

int main(){
    int arr[] = {10, 10, 12, 13, 13, 14, 14, 45, 45, 45, 100, 100, 100};
    remove_duplicates(arr, 13);
    printArr(arr, 13);
}