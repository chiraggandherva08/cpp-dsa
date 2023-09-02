#include <iostream>
using namespace std;

vector<int> printIntersection(int arr1[], int arr2[], int N, int M)
{
    vector<int> res;

    int p1 = 0, p2 = 0;

    while(p1 < N && p2 < M)
    {
        if(arr1[p1] < arr2[p2])
        {
            p1++;
            continue;
        }
        else if(arr1[p1] > arr2[p2])
        {
            p2++;
            continue;
        }
        else
        {
            res.push_back(arr1[p1]);

            while(arr1[p1] == arr1[p1+1])
            {
                p1++;
            }
            
            while(arr2[p2] == arr2[p2+1])
            {
                p2++;
            }    
            p1++;
            p2++;
        }
    }        
    
    if(res.size() == 0)
    {
        res.push_back(-1);
    }
    return res;
}

int main()
{
    return 0;
}
