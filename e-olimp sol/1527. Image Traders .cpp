#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000

int m[1<<15][15][10];

char Price[15][16];


int ones(int n)

{

    int c = 0;

    while(n) c++, n = n & (n - 1);

    return c;

}




int n;

int solve(int mask, int last, int cost)
{

    int temp, i, &ret = m[mask][last][cost];

    if (ret) return ret;

    ret = ones(mask);

    for(int i = 0; i < n; i++)

        if(!(mask & 1<<i) && (Price[last][i] -'0') >= cost)
        {

            temp = solve(mask | 1 << i , i, Price[last][i] -'0');

            if (temp > ret) ret = temp;

        }

    return ret;

}

int main()
{

    while(scanf("%d\n",&n) == 1)

    {

        memset(m,0,sizeof(m));


        for(int i = 0; i < n; i++) gets(Price[i]);

        int res = solve(1,0,0);

        printf("%d\n",res);

    }

    return 0;

}


