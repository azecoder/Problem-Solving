#include <cstdlib>
#include <iostream>
#include <math.h>

#define LL long long

using namespace std;

int sgn(LL n)
{
    return (n > 0) - (n < 0);
}
int RectanglesIntersects(LL x1,LL y1,LL x2,LL y2,LL x3,LL y3,LL x4,LL y4)
{
    if (sgn(x3 - x2) * sgn(x4 - x1) > 0) return 0;
    if (sgn(y3 - y2) * sgn(y4 - y1) > 0) return 0;
    return 1;
}
int intersect(LL x1,LL y1,LL x2,LL y2,LL x3,LL y3,LL x4,LL y4)
{
    LL ABx, ABy, ACx, ACy, ADx, ADy;
    LL CAx, CAy, CBx, CBy, CDx, CDy;
    LL ACxAB, ADxAB, CAxCD, CBxCD;
    if (!RectanglesIntersects(min(x1,x2),min(y1,y2),max(x1,x2),max(y1,y2),
                              min(x3,x4),min(y3,y4),max(x3,x4),max(y3,y4))) return 0;
    ACx = x3 - x1;
    ACy = y3 - y1;
    ABx = x2 - x1;
    ABy = y2 - y1;
    ADx = x4 - x1;
    ADy = y4 - y1;
    CAx = x1 - x3;
    CAy = y1 - y3;
    CBx = x2 - x3;
    CBy = y2 - y3;
    CDx = x4 - x3;
    CDy = y4 - y3;
    ACxAB = ACx * ABy - ACy * ABx;
    ADxAB = ADx * ABy - ADy * ABx;
    CAxCD = CAx * CDy - CAy * CDx;
    CBxCD = CBx * CDy - CBy * CDx;
    if ((sgn(ACxAB) * sgn(ADxAB) > 0) || (sgn(CAxCD) * sgn(CBxCD) > 0))
        return 0;
    return 1;
}
int main(int argc, char *argv[])
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double d1, d2, d3, p1, A1, h1, min, max, ans, res1, res2, res3, res4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    cout.setf(ios::fixed);
    cout.precision(9);
    if (intersect(x1,y1,x2,y2,x3,y3,x4,y4))
        cout<<0.0<<endl;
    else
    {
        d1 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
        d2 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
        d3 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        p1 = (d1 + d2 + d3)/2;
        A1 = sqrt(p1*(p1 - d1)*(p1 - d2)*(p1 - d3));
        h1 = 2*A1/d3;
        min = d1;
        if( d2 < min )
            min = d2;
        max = d1;
        if ( d2 > max )
            max = d2;
        if( min*min + d3*d3 <= max*max )
            res1 = min;
        else
            res1 = h1;
        d1 = sqrt((x4 - x1)*(x4 - x1) + (y4 - y1)*(y4 - y1));
        d2 = sqrt((x4 - x2)*(x4 - x2) + (y4 - y2)*(y4 - y2));
        d3 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        p1 = (d1 + d2 + d3)/2;
        A1 = sqrt(p1*(p1 - d1)*(p1 - d2)*(p1 - d3));
        h1 = 2*A1/d3;
        min = d1;
        if( d2 < min )
            min = d2;
        max = d1;
        if ( d2 > max )
            max = d2;
        if( min*min + d3*d3 <= max*max )
            res2 = min;
        else
            res2 = h1;
        d1 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
        d2 = sqrt((x4 - x1)*(x4 - x1) + (y4 - y1)*(y4 - y1));
        d3 = sqrt((x3 - x4)*(x3 - x4) + (y4 - y3)*(y4 - y3));
        p1 = (d1 + d2 + d3)/2;
        A1 = sqrt(p1*(p1 - d1)*(p1 - d2)*(p1 - d3));
        h1 = 2*A1/d3;
        min = d1;
        if( d2 < min )
            min = d2;
        max = d1;
        if ( d2 > max )
            max = d2;
        if( min*min + d3*d3 <= max*max )
            res3 = min;
        else
            res3 = h1;
        d1 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
        d2 = sqrt((x4 - x2)*(x4 - x2) + (y4 - y2)*(y4 - y2));
        d3 = sqrt((x3 - x4)*(x3 - x4) + (y4 - y3)*(y4 - y3));
        p1 = (d1 + d2 + d3)/2;
        A1 = sqrt(p1*(p1 - d1)*(p1 - d2)*(p1 - d3));
        h1 = 2*A1/d3;
        min = d1;
        if( d2 < min )
            min = d2;
        max = d1;
        if ( d2 > max )
            max = d2;
        if( min*min + d3*d3 <= max*max )
            res4 = min;
        else
            res4 = h1;
        ans = res1;
        if( ans > res2 )
            ans = res2;
        if( ans > res3 )
            ans = res3;
        if( ans > res4 )
            ans = res4;
        cout<<ans<<endl;
    }
    return 0;
}
