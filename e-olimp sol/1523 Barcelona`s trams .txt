#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000

double m0;
int n;
double s[100001];
double a[1002][1002];
double x;

int main()
{

    while(scanf("%lf %d",&m0,&n) == 2)

    {

        for(int i = 0; i < n; i++) scanf("%lf",&s[i]);

        for(int i = 0; i <= n; i++) a[n][i] = 0;


        for(int i = n - 1; i >= 0; i--)

            for(int j = 0; j <= i; j++)

            {

                x = sqrt((m0-j) * s[i] / (10 + s[i]/10 + a[i+1][j+1] - a[i+1][j]));

                if (x > m0 - j) x = m0 - j;

                a[i][j] = (x / (m0-j)) * (s[i]/2/x + 10 + s[i]/10 + a[i+1][j+1]) +

                          (1 - x/(m0-j)) * (s[i]/x + a[i+1][j]);

            }

        printf("%.4lf\n",a[0][0]);

    }

    return 0;

}


