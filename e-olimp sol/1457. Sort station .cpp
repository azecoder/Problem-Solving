#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000

int n, M, val, mx;

int main(void)
{

scanf("%d %d",&n,&M);

while(n--) {

  scanf("%d",&val);

  if ((val < mx) && (val + mx > M)) break;

  if (val > mx) mx = val;

}


if (n >= 0) printf("No\n"); else printf("Yes\n");

    return 0;

}


