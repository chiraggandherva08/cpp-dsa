#include<iostream>
using namespace std;

int ropeCutting(int N, int A, int B, int C, int count){
    if(N == 0){
        return count;
    }
    else if(N < 0){
        return -1;
    }

    return max(
            max(ropeCutting(N-A, A, B, C, count+1), ropeCutting(N-B, A, B, C, count+1)),
            ropeCutting(N-C, A, B, C, count+1)
    );
}

int main(){
    cout << ropeCutting(10, 1, 2, 3, 0) << endl;
    return 0;
}
