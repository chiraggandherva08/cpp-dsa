#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > multiplyMatrix(const vector<vector<int> > &A, const vector<vector<int> > &B)
{
    vector<vector<int> > res;

    if (A.size() != B[0].size())
    {
        return res;
    }

    vector<int> column_sum;

    for (int i = 0; i < B[0].size(); i++)
    {
        int sum = 0;

        for (int j = 0; j < B.size(); j++)
        {
            sum += B[j][i];
        }

        cout << sum << " ";
        column_sum.push_back(sum);
    }

    for (int i = 0; i < A.size(); i++)
    {
        vector<int> temp;

        for (int j = 0; j < A[0].size(); j++)
        {
            temp.push_back(A[i][j] * column_sum[j]);
        }
    }

    return res;
}

int main()
{    
    vector<vector<int> > matrix;

    vector<int> temp;
    temp.push_back(1); 
    temp.push_back(2); 
    temp.push_back(3); 
    matrix.push_back(temp);

    temp.clear();
    temp.push_back(4); 
    temp.push_back(5); 
    temp.push_back(6);
    matrix.push_back(temp);

    temp.clear();
    temp.push_back(7); 
    temp.push_back(8); 
    temp.push_back(9);
    matrix.push_back(temp);

    // ------------------------------

    temp.clear();
    vector<vector<int> > matrix_;
    temp.push_back(11); 
    temp.push_back(12); 
    temp.push_back(13); 
    matrix_.push_back(temp);

    temp.clear();
    temp.push_back(14); 
    temp.push_back(15); 
    temp.push_back(16);
    matrix_.push_back(temp);

    temp.clear();
    temp.push_back(17); 
    temp.push_back(18); 
    temp.push_back(19);
    matrix_.push_back(temp);

    multiplyMatrix(matrix, matrix_);
    return 0;
}
