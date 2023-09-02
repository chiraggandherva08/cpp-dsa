#include <iostream>
using namespace std;

int trapping_rainwater(int* rain, int N){

	// step1: create an array l_max storing all the left-most greatest element;
	int l_max[N];
	l_max[0] = rain[0];
	
	for(int i=1; i<N; i++)
		l_max[i] = max(rain[i], l_max[i-1]);

	// step2: create an array r_max storing all the right-most greatest element;
	int r_max[N];
	r_max[N-1] = rain[N-1];
	
	for(int i=N-2; i>0; i--)
		r_max[i] = max(rain[i], r_max[i+1]);

	// stored water will be given by this equation.
	int stored_water = 0;
	for(int i=1; i<N-1; i++)
		stored_water += min(l_max[i], r_max[i]) - rain[i];

	return stored_water;
}

int main() {
	int rain[] = {1, 1, 5, 2, 7, 6, 1, 4, 2, 3};
	cout << trapping_rainwater(rain, 10) << endl;
    return 0;
}

