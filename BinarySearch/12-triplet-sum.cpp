#include <iostream>
using namespace std;

vector<int> triplet_sum(int* nums, int sum, int N){
    int low = 0, high = N-1;

    vector<int> res;

    while (low < high){
        int curr_sum = nums[low] + nums[high];

        if(curr_sum >= sum){
            high--;
        }
        else{
            for(int i = low+1; i < high; i++){
                if(curr_sum + nums[i] == sum){
                    res.push_back(low);
                    res.push_back(i);
                    res.push_back(high);

                    return res;
                }
                else if(curr_sum + nums[i] > sum){
                    break;
                }
            }
            low++;
        }
    }
    return res;   
}

int main() {
    int nums[] = {2, 3, 4, 8, 9, 20, 40};
    vector<int> res = triplet_sum(nums, 32, 7);

    if(res.size() != 0){
        cout << "[" << res[0] << ", " << res[1] << ", " << res[2] << "]" << endl;
    }
    return 0;
}