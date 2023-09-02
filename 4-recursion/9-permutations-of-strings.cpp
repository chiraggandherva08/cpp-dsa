#include <iostream>
using namespace std;

// N-length.
// !N permutations.
void permutations(string& str, int index = 0){
    if(index == str.length()-1){
        cout << str << endl;
    }

    for(int i = index; i < str.length(); i++){
        swap(str[i], str[index]);
        permutations(str, index+1);
        // for changing the swapped string back to the initial string.
        swap(str[i], str[index]);
    }
}

int main() {
    string str = "abcd";
    permutations(str);
    return 0;
}
