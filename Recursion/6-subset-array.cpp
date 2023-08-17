#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> &res){
    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";

    cout << endl;
}

void array_subsets(vector<int> arr, int index, vector<int> res){
    if(index == arr.size()){
        printArr(res);
        return;
    }
    array_subsets(arr, index+1, res);
    res.push_back(arr[index]);
    array_subsets(arr, index+1, res);
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    vector<int> res;
    array_subsets(arr, 0, res);
    return 0;
}