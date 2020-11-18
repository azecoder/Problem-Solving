#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


long long rep[31], nonrep[31];




long long countNotForbidden(int n)

{

    int i;

    rep[1] = 0;
    rep[2] = 3;

    nonrep[1] = 3;
    nonrep[2] = 6;

    for(i = 3; i <= n; i++)

    {

        rep[i] = rep[i-1] + nonrep[i-1];

        nonrep[i] = 2 * rep[i-1] + nonrep[i-1];

    }

    return rep[n] + nonrep[n];

}

int n;

int main()
{

    while(scanf("%d",&n) == 1)

    {

        int res = countNotForbidden(n);

        printf("%lld\n",res);

    }



    return 0;

}


