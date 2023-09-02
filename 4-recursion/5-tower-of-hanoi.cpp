#include<iostream>
using namespace std;

long long count = 0;

long long toh(int N, int from, int to, int aux){
    if(N == 0){
        return ::count;
    }

    toh(N-1, aux, from, to);
    ::count++;
    std::cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
    return toh(N-1, from, to, aux);
}

int main(){
    toh(2, 1, 3, 2);
    return 0;
}
