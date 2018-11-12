#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



#define MAX 1000001


char dp[MAX][11];

int prt[101][11];

int i, j, n;

int howClose(int target, string last)

{

  int i, j, k, time;

  char energy[] = {'C','E','M','T'}, from[11], to[11];


  for(i = 0; i < n; i++)

  {

    scanf("%s %s %d\n",from,to,&time);

    for(j = 0; j < 4; j++) if (from[0] == energy[j]) break;

    prt[i][0] = j;

    for(j = 0; j < 4; j++) if (to[0] == energy[j]) break;

    prt[i][1] = j;

    prt[i][2] = time;

  }


  memset(dp,0,sizeof(dp));

  for(i = 0; i < 4; i++) dp[0][i] = 1;

  for(i = 0; i < 2 * target; i++)

    for(j = 0; j < 4; j++)

      if (dp[i][j])

        for(k = 0; k < n; k++)

          if (prt[k][0] == j) dp[i+prt[k][2]][prt[k][1]] = 1;

  for(j = 0; j < 4; j++) if (last[0] == energy[j]) break;

  for(i = 0; ; i++)

  {

    if (dp[target+i][j]) break;

    if (dp[target-i][j]) break;

  }

  return i;

}

int target;
string last;


int main()
{

    while(cin >> n >> target >> last)

    {

        int res = howClose(target,last);

        printf("%d\n",res);

    }
    return 0;

}


