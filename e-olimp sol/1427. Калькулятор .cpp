#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

string a;
int b, c, i, j, k, l, h;

int main(int argc, char *argv[])
{
    cin>>a;
    while( isalnum(a[h]) ){
            h++;
        }
    b = 0;
    l = 1;
    for( j = h-1; j >= 0; j-- ){
        c += l*((int)a[j]-48);
        l *= 10;
    }
    for( i = h; i < a.length(); i++ ){
        k = i;
        while( isalnum(a[i]) ){
            i++;
        }
        b = 0;
        l = 1;
        for( j = i-1; j >= k; j-- ){
            b += l*((int)a[j]-48);
            l *= 10;
        }
        if( a[k-1] == '-' )
            c -= b;
        else if( a[k-1] == '+' )
            c += b;
    }
    cout<<c<<endl;

    return 0;
}
