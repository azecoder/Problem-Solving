#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


int kramer(double a1,double b1, double c1, double a2,double b2, double c2, double *x, double *y)
{

    double d = a1 * b2 - a2 * b1;

    double dx = c1 * b2 - c2 * b1;

    double dy = a1 * c2 - a2 * c1;

    if (!d) return (dx == 0.0) + 1;

    *x = dx/d;
    *y = dy/d;

    return 0;

}

void midperpend(double x1, double y1, double x2, double y2, double *a, double *b, double *c)
{

    *a = x2 - x1;

    *b = y2 - y1;

    *c = (x1*x1 - x2*x2 + y1*y1 - y2*y2) / 2;

}

void circle(double x1, double y1, double x2, double y2, double x3, double y3, double *xc, double *yc, double *r)
{

    double a1,b1,c1,a2,b2,c2;

    midperpend(x1,y1,x2,y2,&a1,&b1,&c1);

    midperpend(x1,y1,x3,y3,&a2,&b2,&c2);

    kramer(a1,b1,-c1,a2,b2,-c2,xc,yc);

    *r = sqrt((x1 - *xc)*(x1 - *xc) + (y1 - *yc)*(y1 - *yc));

}


#define EPS 1e-6


double x_1, x_2, x_3, y_1, y_2, y_3;
double xc, yc, r;

int main()
{

    while(scanf("%lf %lf %lf %lf %lf %lf",&x_1,&y_1,&x_2,&y_2,&x_3,&y_3) == 6) {

        circle(x_1,y_1,x_2,y_2,x_3,y_3,&xc,&yc,&r);

        if (fabs(xc) < EPS) {

            printf("x^2");

        } else {

            printf("(x");

            if (xc >= 0.0) printf(" - ");
            else printf(" + ");

            printf("%.3lf)^2",fabs(xc));

        }

        printf(" + ");

        if (fabs(yc) < EPS) {

            printf("y^2");

        } else {

            printf("(y",fabs(xc));

            if (yc >= 0.0) printf(" - ");
            else printf(" + ");

            printf("%.3lf)^2",fabs(yc));

        }

        printf(" = %.3lf^2\n",r);

        printf("x^2 + y^2");



        if (fabs(xc) > EPS)

        {

            if (xc > 0.0) printf(" - ");
            else printf(" + ");

            printf("%.3lfx",2*fabs(xc));

        }

        if (fabs(yc) > EPS)

        {

            if (yc > 0.0) printf(" - ");
            else printf(" + ");

            printf("%.3lfy",2*fabs(yc));

        }

        double r1 = xc*xc + yc*yc - r*r;

        if (fabs(r1) > EPS)

        {

            if (r1 > 0.0) printf(" + ");
            else printf(" - ");

            printf("%.3lf",fabs(r1));

        }

        printf(" = 0\n\n");

    }

    return 0;

}


