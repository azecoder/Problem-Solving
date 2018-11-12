#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359


int x[51], yy1[51], yy2[51];


int n;


double numberOfHits(void)

{

    double a1, a2, res = 0.0;

    int i;

    for(i = 0; i < n; i++)

    {

        a1 = atan(1.0 * yy1[i] / x[i]);

        a2 = atan(1.0 * yy2[i] / x[i]);

        res += fabs(a1 - a2) / PI;

    }

    return res;

}


int main()
{

    while(scanf("%d",&n) == 1)

    {
        int i;

        for(i = 0 ; i < n; i++) scanf("%d",&x[i]);

        for(i = 0 ; i < n; i++) scanf("%d",&yy1[i]);

        for(i = 0 ; i < n; i++) scanf("%d",&yy2[i]);

        double res = numberOfHits();

        printf("%.4lf\n",res);

    }

    return 0;

}


