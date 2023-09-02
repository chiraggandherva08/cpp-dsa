#include <iostream>
using namespace std;

double myPowHelp(double x, int n)
{
	if(n == 0)
        return 1;
        
    double res = myPowHelp(x, n/2);

    if(n%2 != 0)
        return res * res * x;
        
    return res * res;
}

double myPow(double x, int n){
    if(n >= 0)
        return myPowHelp(x, n);
    else
        return 1/myPowHelp(x, n);
}

int main()
{
	cout << myPow(10.0, 11) << endl;
	return 0;
}
