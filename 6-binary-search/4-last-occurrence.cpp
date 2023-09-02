#include <iostream>
using namespace std;

int lastOccurrence(int* nums, int key, int N){
    int low = 0, high = N-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(nums[mid] == key){
            if(nums[mid] == nums[mid+1])
                low = mid+1;
            else 
                return mid;
        }
        
        else if(nums[mid] < key)
            low = mid+1;
        
        else 
            high = mid-1;
        
    }
    return -1;
}

int main() {    
    int nums[] = {1, 2, 3, 3, 2, 6, 7, 7, 7, 14, 101};
    cout << lastOccurrence(nums, 7, 11) << endl;
    return 0;
}