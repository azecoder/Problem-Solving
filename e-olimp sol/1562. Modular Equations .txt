#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
int amin, amax, bmin, bmax, mmin, mmax, res, i, m, tests;
int main()
{
    cin>>tests;
    for( i = 1; i <= tests; i++ )
    {
        res = 0;
        scanf("%d %d %d %d %d %d",&amin,&amax,&bmin,&bmax,&mmin,&mmax);
        for(m = mmin; m <= mmax; m++)
        {
            if (m % 2)
                res += (int)floor(1.0*bmax/m) - (int)floor((1.0*bmin-1)/m);
            else res += (int)(floor(2.0*bmax/m)) - (int)floor((2.0*bmin-2)/m);
        }
        res = res * (amax - amin + 1);
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
