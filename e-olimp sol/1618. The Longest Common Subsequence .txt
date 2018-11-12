#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359

#define SIZE 1010


int x[SIZE], y[SIZE], mas[2][SIZE];
int n, i, m, j;


int main()
{

    scanf("%d",&n);

    for(i = 1; i <= n; i++) scanf("%d",&x[i]);

    scanf("%d",&m);

    for(i = 1; i <= m; i++) scanf("%d",&y[i]);


    memset(mas,0,sizeof(mas));

    for(i = 1; i <= n; i++)

        for(j = 1; j <= m; j++)

            if (x[i] == y[j])

                mas[i%2][j] = 1 + mas[(i+1)%2][j-1];

            else

                mas[i%2][j] = max(mas[(i+1)%2][j],mas[i%2][j-1]);


    printf("%d\n",mas[n%2][m]);

    return 0;

}


