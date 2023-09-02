#include <iostream>
using namespace std;

// uses floyd cycle detection method.
// array contains from 1 to N-2 elements.
// every element occurrs only once except one element.
int repeating_element(int* nums, int N){
    int slow = 0;
    int fast = 0;

    do{
        slow = nums[slow]+1;
        fast = nums[nums[fast]]+1;
    } 
    while (slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow+1]+1;
        fast = nums[fast+1]+1;
    }

    return slow;
}

int main() {
    int nums[] = {1, 0, 6, 5, 5, 4, 2, 3};
    cout << repeating_element(nums, 7) << endl;
    return 0;
}
