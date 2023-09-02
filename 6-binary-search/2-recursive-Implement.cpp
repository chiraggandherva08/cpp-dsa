#include <iostream>
using namespace std;

int bSearch(int* nums, int key, int n, int s, int e){
    if(s > e){ return -1; } // base case.

    int mid = (s + e)/2;

    if(nums[mid] == key)
        return mid; 
    else if(key < nums[mid])
        return bSearch(nums, key, n, s, mid-1); 
    else
        return bSearch(nums, key, n, mid+1, e); 
}

int main() {
    int nums[] = {1, 2, 2, 4, 5, 6, 7, 11, 12, 14, 101};
    cout << bSearch(nums, 2012, 11, 0, 10) << endl;
    return 0;
}
