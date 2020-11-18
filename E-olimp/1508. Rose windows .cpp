#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000




int m, n, k;
double PI = 2*acos(0.0), r;

void GetLine(double x1,double y1, double x2, double y2, double *a, double *b, double *c)

{

    *a = y2 - y1;

    *b = -(x2 - x1);

    *c = -x1*(y2 - y1) + y1*(x2 - x1);

}





void GetPoint(double a1,double b1, double c1, double a2, double b2, double c2, double *x, double *y)

{

    double d = a1*b2 - a2*b1;

    *x = (c1*b2 - c2*b1) / d;

    *y = (a1*c2 - a2*c1) / d;

}




double Area(double x, double y)

{

    double d = x*x+y*y;

    return n*d*sin(2*PI/n)/2;

}



double FindSquare(int k)

{

    double a1,b1,c1,a2,b2,c2;

    double x,y;

    GetLine(r,0,r*cos(2*PI*k/n),r*sin(2*PI*k/n),&a1,&b1,&c1);

    GetLine(r*cos(2*PI/n),r*sin(2*PI/n),r*cos(2*PI*(k+1)/n),

            r*sin(2*PI*(k+1)/n),&a2,&b2,&c2);

    GetPoint(a1,b1,-c1,a2,b2,-c2,&x,&y);

    return Area(x,y);

}






int main()
{

    scanf("%d",&m);

    for(int i = 0; i < m; i++)
    {

        cin >> r >> n >> k;

        double UpperS, DownS, Res;

        if (k == n/2) UpperS = PI*r*r;

        else UpperS = FindSquare(n/2-k);

        DownS = FindSquare(n/2-k+1);

        Res = UpperS - DownS;

        printf("%.4lf\n",Res);

    }

    return 0;

}


