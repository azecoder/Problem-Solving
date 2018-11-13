#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001


int s[1001], dp[1001][1001];

string stroka;


int maximalGoodness(int d, int k)

{

    int i, j, temp, len = stroka.size();

    memset(s,0,sizeof(s));

    for(i = 1; i <= len; i++) s[i] = s[i-1] + stroka[i-1] - 'a' + 1;

    memset(dp,0,sizeof(dp));

    for(i = 1; i <= len; i++)

        for(j = 1; j <= k; j++)

        {

            temp = (i - d) < 0 ? 0 : i - d;

            dp[i][j] = max(dp[i-1][j],dp[temp][j-1] + s[i] - s[temp]);

        }

    return dp[len][k];

}

int d, k;

int main()
{

    while(cin >> d >> k)

    {

        cin >> stroka;

        int res = maximalGoodness(d,k);

        printf("%d\n",res);

    }

    return 0;

}


