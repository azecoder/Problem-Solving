#include <cstdio>
#include <iostream>
#include <algorithm>

#define LL long long
#define MAX 100000000

using namespace std;

LL n ,p ,c, s, k, a[MAX], j, i, b[MAX], m;
char ch;
int main()
{
    while( cin>>ch ) {
        s = s + ((LL )ch-48)*((LL )ch-48);
        m++;
    }
    a[s] = 1;
    if( m == 1 )
        b[1] = (LL )ch-48;
    else
        b[1] = s;
    k = 1;
    n = s;
    for( j = 1; j <= MAX; j++ ) {
        while( n > 0 ) {
            c = n % 10;
            p += c*c;
            n /= 10;
        }
        n = p;
        p = 0;
        if( a[n] == 1 )
            break;
        else {
            a[n] = 1;
            b[++k] = n;
        }
    }
    sort( b + 1, b + k + 1);
    cout<<b[1]<<endl;

    return 0;
}
