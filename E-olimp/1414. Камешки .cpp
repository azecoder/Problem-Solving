#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



#define MAX 10000000



int n, m, d, a;

int main(void)
{

    scanf("%d %d",&n,&m);

    scanf("%d",&d);

    while(n-- > 1)

    {

        scanf("%d",&a);

        d = __gcd(d,a);

    }

    if (m % d == 0) puts("YES");
    else puts("NO");

    return 0;

}


