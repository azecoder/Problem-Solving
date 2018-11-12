#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000



#define MAX 1000000000

char m[15][15][15];

char maze[4000];

int n, res, val[15][15][15][45];


int go(int i,int j, int k,int x)

{

    int &temp = val[i][j][k][x];

    if (temp != -1) return temp;

    if ((i >= n) || (j >= n) || (k >= n)) return 0;

    if (m[i][j][k] == '(') x++;

    if (m[i][j][k] == ')') x--;

    if (x < 0) return 0;

    if ((i == n - 1) && (j == n - 1) && (k == n - 1)) return (x == 0);

    temp  = go(i+1,j,k,x);
    if (temp > MAX) return temp = MAX + 1;

    temp += go(i,j+1,k,x);
    if (temp > MAX) return temp = MAX + 1;

    temp += go(i,j,k+1,x);
    if (temp > MAX) return temp = MAX + 1;

    return temp;

}



int properPaths()

{

    int i, j, k, ptr, res;

    for(ptr = i = 0; i < n; i++) for(j = 0; j < n; j++) for(k = 0; k < n; k++)

                m[i][j][k] = maze[ptr++];

    memset(val,-1,sizeof(val));

    res = go(0,0,0,0);

    return (res > MAX) ? -1 : res;

}


int main()
{

    while(scanf("%d %s",&n,&maze) == 2)

    {

        res = properPaths();

        printf("%d\n",res);

    }
    return 0;

}


