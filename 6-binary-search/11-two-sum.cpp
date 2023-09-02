#include <iostream>
using namespace std;

vector<int> pair_sum(int* nums, int sum, int N){
    int low = 0, high = N-1;
    vector<int> pair;

    while(low < high){
        int curr_sum = nums[low] + nums[high];

        if(curr_sum == sum){
            pair.push_back(low);
            pair.push_back(high);
            return pair;
        }
        else if(curr_sum > sum){
            high--;
        }
        else{
            low++;
        }
    }

    pair.push_back(-1);
    return pair;
}

int main() {
    int nums[] = {-11, -3, 10, 19, 32, 73, 101, 225, 732};
    vector<int> pair = pair_sum(nums, 64, 9);

    if(pair.size() != 1){
        cout << pair[0] << ", " << pair[1] << endl;
    }
    return 0;
}
