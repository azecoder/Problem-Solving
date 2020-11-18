#include <iostream>
#include <cmath>

#define MAX 100001

using namespace std;

double lf[MAX], ans[MAX], res;
int i, n;
int main()
{
    res = lf[1] = 0;
    for( res = 0, i = 2; i < MAX; i++ ){
         res = res + log((double)i);
         lf[i] = res;
         }
    for( i = 0; i < MAX; i = i + 2 ){
         res = lf[i/2-1];
         res = lf[i-2] - (i-2)*log(2.0) - res - res;
         ans[i] = exp(res);
         }
    while( cin>>n ){
           cout.precision(8);
           cout<<fixed<<1 - ans[n]<<endl;
           }

    return 0;
}

