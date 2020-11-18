#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



#define MAX 10000000

int m[MAX];

map<int, int> mp;




int f(int n)

{

    if (n < MAX) return m[n];

    if (mp[n] > 0) return mp[n];

    if (n % 3 == 0)

        mp[n] = f(n/3) + 5;

    else

        mp[n] = f(n-4) + 2;

    return mp[n];

}

int n;

int main(void)
{

    m[0] = -MAX;
    m[1] = 0;
    m[2] = -MAX;
    m[3] = 5;
    m[4] = -MAX;
    m[5] = 2;

    for(int i = 6; i < MAX; i++)

        if(i % 3 == 0)

            m[i] = min(m[i / 3] + 5, m[i - 4] + 2);

        else

            m[i] = m[i - 4] + 2;

    scanf("%d",&n);

    int res = f(n);


    if (res < 0) res = 0;

    printf("%d\n",res);

    return 0;

}


