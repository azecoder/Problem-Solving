#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


#define MAX 110

#define INF 0x3F3F3F3F

int m[MAX][MAX];

int d[MAX], p[MAX];

int cycle [2*MAX], ptr;

int n;



int Floyd_Warshal(void)

{

    int i, j, k;

    int g[MAX][MAX];

    memcpy(g,m,sizeof(m));

    for(k = 1; k <= n; k ++)

        for(i = 1; i <= n; i++)

            for(j = 1; j <= n; j++)

                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);



    for(i = 1; i <= n; i++)

        if(g[i][i] < 0) return i;

    return 0;

}

void Bellman_Ford(int Source)

{

    int stage, i, j;

    memset(d,0x3F,sizeof(d));

    memset(p,-1,sizeof(p));

    d[Source] = 0;

    for(int stage = 0; stage < n; stage++)


        for (i = 1; i <= n; i++)

            for (j = 1; j <= n; j++)

            {

                if ((d[i] < INF) && (m[i][j] != INF))

                    if (d[j] > d[i] + m[i][j])

                    {

                        d[j] = d[i] + m[i][j];

                        p[j] = i;

                    }

            }



    int y = Source;

    for(i = 1; i <= n; i++)

        y = p[y];



    ptr = 0;

    cycle[ptr++] = y;

    int cur = p[y];

    while(cur != y)

    {

        cycle[ptr++] = cur;

        cur = p[cur];

    }

    cycle[ptr++] = y;


    for(i = 0; i < ptr - i - 1; i++)

    {

        int temp = cycle[i];

        cycle[i] = cycle[ptr - i - 1];

        cycle[ptr - i - 1] = temp;

    }

}


int main(void)
{

    scanf("%d",&n);

    for(int i = 1; i <= n; i++)

        for(int j = 1; j <= n; j++)

        {

            scanf("%d",&m[i][j]);

            if (m[i][j] == 100000) m[i][j] = INF;

        }



    int start = Floyd_Warshal();


    if(start == 0) // no negative cycle

    {

        puts("NO");

        return 0;

    }


    Bellman_Ford(start);

    printf("YES\n%d\n",ptr);

    for(int i = 0; i < ptr - 1; i ++)

        printf("%d ",cycle[i]);

    printf("%d\n",cycle[ptr-1]);

    return 0;

}


