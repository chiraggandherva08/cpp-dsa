#include <iostream>
#include<map>
using namespace std;

// Naive Approach.
// Time Complexity: O(N).
// Aux. Space Complexity: O(N).
int majority_element(int* nums, int N){
    map<int, int> mp;

    for(int i=0; i<N; i++){
        mp[nums[i]] += 1;

        if(mp[nums[i]] > N/2) 
            return nums[i];
    }
    return -1;
}

// Efficient Approach.
// Time Complexity: O(N).
// Aux. Space Complexity: O(1).
// Moore's voting algorithm.
int moore_algo(int* nums, int N){
    int res = 0;
    int count = 1;

    for(int i=1; i<N; i++){
        if(nums[res] == nums[i]) 
            count++;
        else
            count--;
        
        if(count == 0){
            count = 1;
            res = i;
        }
    }
    return nums[res];
}

int main() {
    int nums[] = {1, 6, 6, 6, 5, 6, 7, 7};
    cout << majority_element(nums, 8) << endl;
    cout << moore_algo(nums, 8) << endl;
    return 0;
}