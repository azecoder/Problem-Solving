#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001


int powmod(int a,int b,int T)
{
    a%=T;
    long long R=1;

    while(b)
    {
        if(b&1) R=(R*a)%T;
        a=(a*a)%T;
        b>>=1;
    }

    return int(R);
}

int tests, e, n, c;

int main()
{

    scanf("%d",&tests);

    while(tests--)

    {

        scanf("%d %d %d",&e,&n,&c);



        int cOriginal = c;

        c = powmod(c,e,n);
        int cPrev = cOriginal;


        while(c != cOriginal)

        {

            cPrev = c;

            c = powmod(c,e,n);

        }


        printf("%d\n",cPrev);

    }

    return 0;

}


