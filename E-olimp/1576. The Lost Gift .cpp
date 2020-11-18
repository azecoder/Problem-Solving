#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001


int b, r;


int check(int bres)

{

    if (bres % 2) return -1;
    bres /= 2;

    if (!((0.7 * bres <= b) && ((b <= bres)))) return -2;

    return bres - b;

}


int main()
{

    while(scanf("%d %d",&r,&b),r + b)

    {

        int d = 1 + 8 * r;
        int dd = sqrt(1.0 * d + 1.0e-7);

        if (dd * dd != d) printf("No. of red balls invalid\n");

        else

        {

            int res1 = check(1 + 2*r - dd);

            int res2 = check(1 + 2*r + dd);

            if ((res1 == -1) && (res2 == -1)) printf("No. of red balls invalid\n");

            else if ((res1 == -2) && (res2 == -2))

                printf("No. of black balls invalid\n");

            else

            {

                if ((res1 >= 0) && (res2 >= 0)) printf("%d %d\n",res1,res2);
                else

                    if (res1 >= 0) printf("%d\n",res1);
                    else printf("%d\n",res2);

            }

        }

    }

    return 0;

}


