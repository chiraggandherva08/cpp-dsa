#include<iostream>
using namespace std;

int sum_of(int* pages, int s, int e){
    int sum = 0;
    
    for(int i=s; i<=e; i++)
        sum += pages[i];

    return sum;
}

int page_allocation(int* pages, int N, int K){
    if(K == 1)
        return sum_of(pages, 0, N-1);
    
    if(N == 1)
        return pages[0];
    
    int res = INT_MAX;

    for(int i=1; i<N; i++){
        res = min(max(page_allocation(pages, i, K-1), sum_of(pages, i, N-1)), res);
    }
    
    return res;
}

int main(){
    int pages[] = {10, 20, 30, 40};

    cout << page_allocation(pages, 4, 2) << endl;
    return 0;
}