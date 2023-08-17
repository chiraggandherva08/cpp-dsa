#include<iostream>
using namespace std;

int secondMaxIndex(int* arr, int n){
    int maxIndex = 0;
    int secondIndex = 0;

    for(int i=0; i<n; i++){
        if(arr[maxIndex] < arr[i]){
            secondIndex = maxIndex;
            maxIndex = i;
        }
        else if(arr[i] > arr[secondIndex]){
            secondIndex = i;
        }
    }
    return secondIndex;
}

int main(){
    int arr[] = { 10, 11, 102, 1020, 7644, 89, 73, 101, 34, 43, 66 };
    cout << secondMaxIndex(arr, 11) << endl;
}
