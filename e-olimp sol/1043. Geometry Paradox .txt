#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;

#define PI 3.14159265358979323846

int n;
int r1, r2;
char c;

int main(void)
{

    scanf("%d",&n);

    while(n--) {

        scanf("%d",&r1);
        scanf("%c",&c);
        int cnt = 1;

        if (c == ' ') {

            scanf("%d\n",&r2), cnt = 2;

        }

        double res;
        if (cnt == 2) {

            res = 2.0*PI*r1*r2;

        } else {

            res = PI * r1 * r1 / 8.0;

        }

        printf("%.4lf\n",res);

    }

    return 0;

}


