#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;

#define MAX 100001

#define LOGMAX 17
ld xc, yc;

int n, m;

int a[MAX], u, v;

int mas[MAX][LOGMAX];




void check(int &u, int &v)

{

    int temp;

    if (u > v) temp = u, u = v, v = temp;

}



void RMQ_nlogn(void)

{

    int i, j;

    for (i = 1; i <= n; i++) mas[i][0] = i;

    for (j = 1; (1 << j) <= n; j++)

        for (i = 1; i + (1 << j) - 1 <= n; i++)

            if (a[mas[i][j - 1]] < a[mas[i + (1 << (j - 1))][j - 1]])

                mas[i][j] = mas[i][j - 1];

            else mas[i][j] = mas[i + (1 << (j - 1))][j - 1];

}




int q(int i, int j)

{

    int k = (int)(log(1.0*j - i + 1) / log(2.0));

    int res = mas[i][k];

    if (a[mas[j - (1<<k) + 1][k]] < a[res]) res = mas[j - (1<<k) + 1][k];

    return res;

}

int main()
{



    scanf("%d %d",&n,&m);

    scanf("%d %d %d",&a[1],&u,&v);




    for(int i = 2; i <= n; i++)

        a[i] = (23 * a[i-1] + 21563) % 16714589;



    RMQ_nlogn();


    int ans, u1, v1;

    for(int i = 1; i <= m; i++)

    {


        u1 = u, v1 = v;

        check(u1,v1);

        ans = a[q(u1,v1)];

        if (i < m)

        {



            u = ((17*u + 751 + ans + 2*i) % n) + 1;

            v = ((13*v + 593 + ans + 5*i) % n) + 1;

        }

    }


    printf("%d %d %d\n",u,v,ans);

    return 0;
}
