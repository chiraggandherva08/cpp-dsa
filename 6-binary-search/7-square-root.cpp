#include <iostream>
using namespace std;

int sqrt_floor(int num){
    int low = 0, high = num;
    int res = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(mid*mid > num){
            high = mid - 1;
        }
        else if(mid*mid < num){
            low = mid + 1;
            res = mid;
        }
        else {
            return mid;
        }
    }
    return res;
}

int main() {
    return 0;
}