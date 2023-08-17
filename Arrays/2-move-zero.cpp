#include<iostream>
using namespace std;

void moveZeros(int* arr, int N){
    int countZeros = 0;

    for(int i=0; i<N; i++)
        if(arr[i] != 0)
            swap(arr[i], arr[countZeros++]);
}

int main(){
    return 0;
}