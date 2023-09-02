#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    // m.insert({5,"five"});

    for(auto it: m) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}