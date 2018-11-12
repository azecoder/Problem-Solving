#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int i, j, k = 1, l, n, m = 1, t, a[10001], b[10001], c[10001], d[10001];
int main()
{
    cin>>n;
    for( i = 1; i <= n; i++ )
        cin>>a[i];
    for( i = 1; i <= n; i++ )
        cin>>b[i];
    d[m] = b[1];
    c[k] = a[1];
    for( i = 2; i <= n; i++ )
    {
        l = 0;
        for( j = i - 1; j >= 1; j-- )
            if( a[i] == a[j] )
            {
                l = 1;
                break;
            }
        if( l != 1 )
        {
            k++;
            c[k] = a[i];
        }
    }

    for( i = 2; i <= n; i++ )
    {
        l = 0;
        for( j = i - 1; j >= 1; j-- )
            if( b[i] == b[j] )
            {
                l = 1;
                break;
            }
        if( l != 1 )
        {
            m++;
            d[m] = b[i];
        }
    }
    for( i = 1; i <= k; i++ )
    {
        for( j = 1; j <= m; j++ )
            if(c[i] == d[j])
                t++;
    }
    cout<<t<<endl;

    return 0;
}
