#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s; // Implementation.

    for(int i = 0; i < 15; i++){
        s.insert(i); // Insersion
    }

    for(int elem: s){
        cout << elem << " ";
    } cout << endl;

    // traversal of a unordered_set
    // s.begin() returns the iterator/pointer to the beginning of the set.
    // s.end() returns the next iterator/pointer to the end of the set.
    for(auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << (*itr) << " ";
    } cout << endl;

   
    cout << s.size() << endl; // size of the set.
   
   
    s.clear(); // clears the set.


    // s.find(val) returns the iter.. to the found location else returns set.end().
    cout << (s.find(1) != s.end()) << endl;
    // s.count(val) return 1 or 0.
    cout << s.count(1) << endl;


    // erasing a value.
    auto it = s.find(4); // erasing using iterator.
    s.erase(it);
    s.erase(3); // erasing using value.
    s.erase(s.begin(), s.end()); // erasing a range. 


    // is the set empty.
    cout << s.empty() << endl; 
    return 0;
}

/*
Time Complexity:
    erase: O(1)
    insert: O(1)
    find/count: O(1)
    size: O(1)
    empty: O(1)
*/