#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000



#define MAX 101

int n, leftSide, rightSide;
int dp[MAX][MAX][MAX];



int f(int n, int leftSide, int rightSide)

{

    if (n == 1) return (leftSide == 1 && rightSide == 1) ? 1 : 0;

    if ((leftSide < 1) || (rightSide < 1)) return 0;

    if (dp[n][leftSide][rightSide] != -1) return dp[n][leftSide][rightSide];

    dp[n][leftSide][rightSide] = (int)(((long long)f(n-1,leftSide-1,rightSide) +

                                        (long long)f(n-1,leftSide,rightSide-1) +

                                        (n-2)*(long long)f(n-1,leftSide,rightSide)) % 1000000007);

    return dp[n][leftSide][rightSide];

}


int main()
{

    while(scanf("%d %d %d",&n,&leftSide,&rightSide) == 3)

    {

        memset(dp,-1,sizeof(dp));

        int res = f(n,leftSide,rightSide);

        printf("%d\n",res);

    }

    return 0;

}


