#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


#define MAX 5000001

int powk[10], f[MAX], ptr;

long long res;



int sum(int n)

{

    int s;

    for(s = 0; n; n /= 10)

        s += powk[n % 10];

    return s;

}



int g(int n)

{



    if (f[n] > 0) return f[n];
    else




        if (f[n] == 0) f[n] = -1;
        else



            if (f[n] == -1) f[n] = n;

    return f[n] = min(n,g(sum(n)));

}


long long calcTheSum(int a, int b, int k)

{

    int i, j, s;

    long long res = 0;

    for(i = 0; i < 10; i++)

    {

        for(s = 1, j = 0; j < k; j++) s *= i;

        powk[i] = s;

    }

    for(i = a; i <= b; i++)

        res += g(i);

    return res;

}

int a, b, k;

int main()
{

    while(scanf("%d %d %d",&a,&b,&k) == 3)

    {

        memset(f,0,sizeof(f));

        res = calcTheSum(a,b,k);

        printf("%lld\n",res);

    }
    return 0;

}


