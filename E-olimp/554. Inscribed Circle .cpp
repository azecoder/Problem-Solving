#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;


#define MAX 10
#define EPS 1e-7
int x[MAX], y[MAX];


void Bisect(int n, ld &a, ld &b, ld &c)
{

    ld x0 = x[n-1], y0 = y[n-1];
    ld x1 = x[n],   y1 = y[n];
    ld x2 = x[n+1], y2 = y[n+1];
    ld a1 = y1 - y0, a2 = y2 - y1;
    ld b1 = x0 - x1, b2 = x1 - x2;
    ld c1 = x1*y0 - x0*y1;
    ld c2 = x2*y1 - x1*y2;
    ld d1 = sqrt(a1*a1 + b1*b1);
    ld d2 = sqrt(a2*a2 + b2*b2);

    a = a1 * d2 - a2 * d1;
    b = b1 * d2 - b2 * d1;
    c = c1 * d2 - c2 * d1;

}


void kramer(ld a1,ld b1, ld c1, ld a2, ld b2, ld c2, ld &x, ld &y)
{

    ld d = a1 * b2 - a2 * b1;
    ld dx = c1 * b2 - c2 * b1;
    ld dy = a1 * c2 - a2 * c1;

    x = dx/d;
    y = dy/d;

}


ld dist(ld a, ld b, ld c, ld x, ld y)
{

    return fabs(a*x+b*y+c) / sqrt(a*a + b*b);

}


int n;

ld a1, b1, c1;
ld a2, b2, c2;
ld xc, yc;
ld r, d;

int main()
{

    scanf("%d",&n);

    for(int i = 0; i < n; i++)

        scanf("%d %d",&x[i],&y[i]);

    x[n] = x[0];
    y[n] = y[0];


    Bisect(1,a1,b1,c1);
    Bisect(2,a2,b2,c2);

    kramer(a1,b1,-c1,a2,b2,-c2,xc,yc);
    
    r = dist(y[1] - y[0],x[0] - x[1],x[1]*y[0] - x[0]*y[1],xc,yc);


    for(int i = 1; i < n; i++) {

        d = dist(y[i+1] - y[i],x[i] - x[i+1],x[i+1]*y[i] - x[i]*y[i+1],xc,yc);

        if (fabs(d - r) > EPS) {

            printf("NO\n");
            return 0;

        }

    }

    printf("YES\n");
    printf("%.6lf %.6lf %.6lf\n",xc,yc,r);

    return 0;
}
