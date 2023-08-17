#include <iostream>
using namespace std;

int bSearch(int* nums, int key, int n){
    int s = 0, e = n-1;

    while (s <= e) {
        int mid = s - (e - s)/2;

        if(nums[mid] < key)
            s = mid+1;
        else if(nums[mid] > key)
            e = mid-1; 
        else
            return mid; // if element is not present.
    }

    return -1; // if element is not present.
}

int main() {
    return 0;
}