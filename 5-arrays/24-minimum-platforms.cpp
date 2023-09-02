#include<iostream>
using namespace std;

int calculateMinPatforms(int at[], int dt[], int n)
{
    sort(at, at + n);
    sort(dt, dt + n);

    int dt_p = 0;
    int at_p = 1;
    int res = 1;

    while(at_p < n)
    {
        if(dt[dt_p] >= at[at_p])
        {
            at_p++;
            res = max(res, at_p - dt_p);
        }
        else {
            dt_p++;
            at_p++;
        }
    }

    return res;
}

int main(){
	return 0;
}
