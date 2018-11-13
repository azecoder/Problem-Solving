#include <iostream>
#include <cstring>
#include <cstdlib>
#include <math.h>
using namespace std;
char a[3];
int n, s, i;
int main()
{
    cin>>a;
    n = strlen(a);
    if( n == 4 )
    {
        for( i = 0; i < n; i++ )
            a[i] = (int)a[i] - 48;
        s = 4;
        for( i = 0; i < n-1; i++ )
            s += abs((int)a[i] - (int)a[i+1]);
        cout<<s<<endl;
    }
    if( n == 3 )
    {
        for( i = 0; i < n; i++ )
            a[i] = (int)a[i] - 48;
        s = a[0]+4;
        for( i = 0; i < n-1; i++ )
            s += abs((int)a[i] - (int)a[i+1]);
        cout<<s<<endl;
    }
    if( n == 2 )
    {
        for( i = 0; i < n; i++ )
            a[i] = (int)a[i] - 48;
        s = a[0]+4;
        for( i = 0; i < n-1; i++ )
            s += abs(a[i] - a[i+1]);
        cout<<s<<endl;
    }
    if( n == 1 )
    {
        a[0] = (int)a[0] - 48;
        s = a[0] + 4;
        cout<<s<<endl;
    }
    return 0;
}
