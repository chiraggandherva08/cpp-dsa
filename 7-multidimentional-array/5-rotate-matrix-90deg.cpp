#include<iostream>
#include<vector>
using namespace std;

void rotateby90(vector<vector<int>> &matrix, int n){

    int m = matrix[0].size();

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < m; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n / 2; i++){
        swap(matrix[i], matrix[n - i - 1]);
    }
}

int main(){
    return 0;
}
