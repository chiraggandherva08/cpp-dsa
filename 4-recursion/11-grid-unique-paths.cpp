#include <iostream>
using namespace std;

int unique_paths(int m, int n, int i, int j){
	if(i == m-1)
		return 1;
	else if(j == n-1)
		return 1;

	return unique_paths(m, n, i+1, j) + unique_paths(m, n, i, j+1);
}

int main() {
	cout << unique_paths(20, 50, 0, 0) << endl;
    return 0;
}
