#include <iostream>
using namespace std;

int peak_index(int* nums, int N){
    int low=0, high=N-1;

    while (low <= high){
        int mid = (low + high)/2;

        if(nums[mid] >= nums[mid+1] && nums[mid] >= nums[mid-1]){
            return mid;
        }
        else if(nums[mid] < nums[mid-1]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return N-1;
}

int main() {
    int nums[] = {17, 19, 9, 5, 3, 6, 17, 7, 18, 16, 18, 11, 3, 15, 2};
    int N = sizeof(nums)/sizeof(int);

    cout << peak_index(nums, N) << endl;
    return 0;
}
