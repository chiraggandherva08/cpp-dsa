#include<iostream>
using namespace std;

void allSubsets(string str, string temp, int index){
    if(index == str.length()){
        cout << temp << endl;
        return;
    }

    allSubsets(str, temp, index+1);
    allSubsets(str, temp + str[index], index+1);
}

int main(){
    allSubsets("abcdefghijklmnopqrstuw", "", 0);
    return 0;
}
