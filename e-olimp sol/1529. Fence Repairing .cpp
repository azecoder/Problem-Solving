#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000

char boards[2502];

double c[2502];




double calculateCost(void)

{

    int i, j, len = strlen(boards+1);

    for(c[0] = 0, i = 1; i <= len; i++)

    {

        c[i] = 2000000000;

        if (boards[i] == '.') c[i] = c[i-1];
        else

            for(j = 0; j < i; j++)

                c[i] = min(c[i],c[j] + sqrt(1.0 * i - j));

    }

    return c[len];

}


int main()
{

    while (gets(boards+1))

    {

        double res = calculateCost();

        printf("%.4lf\n",res);

    }

    return 0;

}


