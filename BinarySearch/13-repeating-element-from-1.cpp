#include <iostream>
using namespace std;

// uses floyd cycle detection method.
// array contains from 1 to N-2 elements.
// every element occurrs only once except one element.
int repeating_element(int* nums, int N){
    int slow = 0;
    int fast = 0;

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    int nums[] = {1, 6, 5, 3, 3, 4, 2, 3};
    cout << repeating_element(nums, 9) << endl;
    return 0;
}
