#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359


int m[10], cur[10];

int n, s;


void shuffle(int pos)

{

    int i, c;

    if (pos == n)

    {

        for(i = 0; i < n; i++)

            if (m[i] != cur[i]) return;

        s++;

        return;

    }



    for(c = i = 0; i < n; i++)

        if (m[i] != cur[i]) c++;

    if (c > 2 * (n - pos)) return;



    for(i = 0; i < n; i++)

    {

        swap(cur[i],cur[pos]);

        shuffle(pos + 1);

        swap(cur[i],cur[pos]);

    }

}

int main()
{

    while(scanf("%d",&n) == 1)

    {

        int i;
        for(s = i = 0; i < n; i++)

            scanf("%d",&m[i]), cur[i] = i + 1;

        shuffle(0);

        double res = 1.0 * s / pow((double)n,(double)n);

        printf("%.4lf\n",res);

    }

    return 0;

}


