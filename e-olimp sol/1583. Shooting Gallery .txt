#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359


int profitableBet(int accuracy)

{

    double miss = 1 - accuracy / 100.0,prob = miss;

    int n = 0;

    while (prob > 0.5) n++,prob *= miss;

    return n;

}

int accuracy;

int main()
{

    while(scanf("%d",&accuracy) == 1)

    {

        int res = profitableBet(accuracy);

        printf("%d\n",res);

    }

    return 0;

}


