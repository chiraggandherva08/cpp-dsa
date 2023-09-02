#include <iostream>
using namespace std;

int pivot_index(int* nums, int N){
    int s=0, e=N-1;

    while (s <= e){
        int mid = (s + e)/2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return mid;
        }
        else if(nums[mid] > nums[N-1]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return N-1;
}

int main() {
    int rotated_arr[] = {10, 11, 13, 14, 21, -100};
    int N = sizeof(rotated_arr)/sizeof(int);

    cout << pivot_index(rotated_arr, N) << endl;
    return 0;
}
