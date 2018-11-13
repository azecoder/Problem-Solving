#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000






double a, b, c, d1, d2;
int cs = 1;

int main()
{

    while(scanf("%lf %lf %lf",&a,&b,&c), a != -1.0)

    {

        d1 = a * c / b;

        printf("Set %d:\n",cs++);



        if (b > d1)

        {

            d2 = (a + d1) * (c + d1) / (b - d1);

            printf("%.4lf\n",d1+d2);

        }

        else printf("Poor King!\n",d1+d2);

    }

    return 0;

}


