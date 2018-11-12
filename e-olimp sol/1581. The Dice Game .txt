#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

double r[1000001];




double expectedThrows(int candies)

{

    int i, j;

    double s;

    r[0] = 0;

    for(i = 1; i <= candies; i++)

    {

        for(s = 0, j = max(i-6,0); j < i; j++)

            s += r[j];

        r[i] = 1 + s / 6;

    }

    return r[candies];

}

int n;

int main()
{

    while(scanf("%d",&n) == 1)

    {

        double res = expectedThrows(n);

        printf("%.4lf\n",res);

    }

    return 0;

}


