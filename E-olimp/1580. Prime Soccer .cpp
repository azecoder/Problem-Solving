#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int primes[7] = {2, 3, 5, 7, 11, 13, 17};
int skillOfTeamA,skillOfTeamB, i;
double res;
long long  int fact (long long  int n)
{
    if( n == 0 )
        return 1;
    else
        return fact(n-1)*n;
}
double getProbability(int skillOfTeamA, int skillOfTeamB)
{
    double pa, pb, sa = skillOfTeamA / 100.0, sb = skillOfTeamB / 100.0,
                   f18 = fact(18);
    for(pa = pb = i = 0; i < 7; i++)
    {
        pa += f18 / fact(primes[i]) / fact(18 - primes[i]) * pow(sa, primes[i]) *
              pow(1 - sa, 18 - primes[i]);
        pb += f18 / fact(primes[i]) / fact(18 - primes[i]) *
              pow(1.0 * sb, primes[i]) * pow(1.0 - sb, 18 - primes[i]);
    }
    return pa + pb - pa * pb;
}
int main()
{
    while(scanf("%d %d",&skillOfTeamA,&skillOfTeamB) == 2)
    {
        res = getProbability(skillOfTeamA, skillOfTeamB);
        printf("%.4lf\n",res);
    }
    return EXIT_SUCCESS;
}
