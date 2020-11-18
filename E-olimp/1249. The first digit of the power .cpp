#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
long long n, len, res;
double lgg, ost;
int main(int argc, char *argv[])
{
    while(scanf("%lld",&n) == 1) {
        lgg = n * (log((double)n)/log(10));
        len = (long long)(lgg + 1e-7) + 1;
        ost = lgg + 1 - len;
        res = (long long)(pow(10.0,ost) + 1e-7);
        printf("%lld\n",res);
    }
    return 0;
}
