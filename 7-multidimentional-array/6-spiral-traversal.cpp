#include<iostream>
#include<vector>
using namespace std;

void spirallyTraverse(vector<vector<int> > matrix, int top, int left, int bottom, int right)
{
    int n = bottom - top + 1;
    int m = right - left + 1;

    if (n == 1)
    {
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";

        return;
    }
    else if (m == 1)
    {
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][left] << " ";

        return;
    }
    else
    {
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";

        for (int i = top + 1; i < bottom; i++)
            cout << matrix[i][right] << " ";

        for (int i = right; i >= left; i--)
            cout << matrix[bottom][i] << " ";

        for (int i = bottom - 1; i > top; i--)
            cout << matrix[i][left] << " ";
    }
}

void spirallyTraverse(vector<vector<int> > matrix, int r, int c)
{
    int top = 0, bottom = r - 1, left = 0, right = c - 1;

    while (top <= bottom && left <= right)
    {
        spirallyTraverse(matrix, top, left, bottom, right);

        top++;
        left++;

        right--;
        bottom--;
    }
    cout << endl;
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

    spirallyTraverse(matrix, 3, 3);

    return 0;
}