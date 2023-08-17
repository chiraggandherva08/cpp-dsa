#include<iostream>
using namespace std;

int maxWater(int nums[], int n){ 
    int l = 0, h = n-1;        
    int res = (h - l - 1) * min(nums[l], nums[h]);
        
    while(l <= h){
        if(nums[l] < nums[h]){
            l++;
        }
        else if(nums[h] < nums[l]){
            h--;
        }
        else{
            l++;
            h--;
        }
        int dis = (h - l -1);
        int wq = dis * min(nums[l], nums[h]);    
        
        res = max(res, wq);
    }
    return res;
}

int main(){
}