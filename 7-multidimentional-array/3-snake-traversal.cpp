#include <iostream>
using namespace std;

void snakePattern(vector<vector<int> > matrix)
{
    int N = matrix.size();

    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            for (int j = 0; j < N; j++){
                cout << matrix[i][j] << " ";
            }
        }
        else{
            for (int j = N - 1; j >= 0; j--){
                cout << matrix[i][j] << " ";
            }
        }

        cout << endl;
    }
}

int main(){
    return 0;
}
