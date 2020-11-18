#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

#define LL __int64
#define MAXN 10005
#define INF 0x3f3f3f3f
#define pi acos(-1.0)
#define mod 100000000
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define mp make_pair

using namespace std;

int dp[1<<12][20];
int d[20][20];
void floyd(int n)
{
    int i, j, k;
    for(k=0; k<=n; k++) {
        for(i=0; i<=n; i++) {
            for(j=0; j<=n; j++) {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n, i, j, tot, last, k, min1;
    cin >> n;
    for(i=0; i<=n; i++)
        for(j=0; j<=n; j++)
            cin >> d[i][j];
    floyd(n);

    /*for(i=0; i<=n; i++){
        for(j=0; j<=n; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }*/
    tot=1<<n;
    //cout << tot << endl;
    clr(dp,INF);
    for(i=1; i<tot; i++) {
        for(j=0; j<n; j++) {
            if(i&(1<<j)) {
                last=i-(1<<j);
                if(!last) {
                    dp[i][j+1]=d[0][j+1];
                    continue ;
                }
                for(k=0; k<n; k++)
                    if(last&(1<<k))
                        dp[i][j+1]=min(dp[i][j+1],dp[last][k+1]+d[k+1][j+1]);
            }
        }
    }

    min1=INF;
    for(i=1; i<=n; i++) {
        dp[tot-1][i] += d[i][0];
        min1=min(min1,dp[tot-1][i]);
    }
    cout << min1 << endl;

    return 0;
}
