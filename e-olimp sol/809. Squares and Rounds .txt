#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;

#define MAX 2011

#define EPS 1e-7

double res[MAX][MAX];
int s, r;

int main()
{

    scanf("%d %d",&s,&r);

    memset(res,0,sizeof(res));

    rep(i, 1, MAX - 1)
    {

        res[0][i] = 1;

    }


    rep(i, 1, s)
    {

        rep(j, 1, r)
        {

            res[i][j] = 2 * i * j * res[i][j-1] + i * (i - 1) * ((i > 1) ? res[i-2][j] : 0);

            res[i][j] /= ((i + j) * (i + j - 1) - j * (j - 1));

        }

    }

    printf("%.11lf\n",res[s][r]);



    return 0;
}
