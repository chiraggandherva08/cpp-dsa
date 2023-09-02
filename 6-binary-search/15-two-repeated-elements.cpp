#include <iostream>
using namespace std;

vector<int> twoRepeated(int nums[], int N){
    vector<int> res;

    for (int i = 0; i < N+2;){
        int c_index = nums[i] - 1;

        if (nums[c_index] == nums[i]){
            i++;
        }
        else{
            int temp = nums[i];
            nums[i] = nums[c_index];
            nums[c_index] = temp;
        }
    }

    res.push_back(nums[N - 1]);
    res.push_back(nums[N - 2]);
    return res;
}

int main(){
    int nums[] = {1, 1, 2, 2};

    vector<int> res = twoRepeated(nums, 2);
    cout << res[0] << ", " << res[1] << endl;

    return 0;
}
