#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;




#define MAX 110

int n, t;
int coins[100001];

int main(void)
{

    while(scanf("%d %d",&n,&t),n + t > 0)

    {

        for(int i = 0; i < n; i++) scanf("%d",&coins[i]);

        while(t--)
        {

            int Height, Greater, Less;

            scanf("%d",&Height);

            Greater = 0x7FFFFFFF;

            Less = 0;
            int h;

            for(int x1 = 0; x1 < n - 3; x1++)

                for(int x2 = x1 + 1; x2 < n - 2; x2++)

                    for(int x3 = x2 + 1; x3 < n - 1; x3++)

                        for(int x4 = x3 + 1; x4 < n; x4++)
                        {

                            h = coins[x1] * coins[x2] / __gcd(coins[x1],coins[x2]);

                            h = h / __gcd(h,coins[x3]) * coins[x3];

                            h = h / __gcd(h,coins[x4]) * coins[x4];

                            int low = Height / h * h;

                            if (low > Less) Less = low;

                            if (low != Height) low += h;

                            if (low < Greater) Greater = low;

                        }

            printf("%d %d\n",Less,Greater);

        }

    }

    return 0;

}


