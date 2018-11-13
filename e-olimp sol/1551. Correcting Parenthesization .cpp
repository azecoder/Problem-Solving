#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


int m[51][51], res;

char s[51];


int enc(char c, char d)
{

    string p = "([{)]}";

    if (p.find(c) / 3 > 0 && p.find(d) / 3 < 1) return 2;

    if (p.find(c) % 3 == p.find(d) % 3 && c != d) return 0;

    return 1;

}


int f(int i, int j)

{

    int k;

    if (i > j) return 0;

    if (m[i][j] >= 0) return m[i][j];

    int r = f(i+1,j-1) + enc(s[i],s[j]);

    for(k = i + 1; k < j; k += 2)

        r = min(r,f(i,k) + f(k+1,j));

    return m[i][j] = r;

}


int main()
{

    while(gets(s))

    {

        memset(m,-1,sizeof(m));

        res = f(0,strlen(s) - 1);

        printf("%d\n",res);

    }

    return 0;

}


