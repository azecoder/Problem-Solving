#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359

#define SIZE 1010


int n;

int Uinv(int i)

{

    if (i % 2) return (i + 1) / 2;
    else return n / 2 + i / 2;

}



int Dinv(int i)

{

    if (i % 2) return n / 2 + (i + 1) / 2;
    else return i / 2;

}

int k, i = 0;
string s;

int main()
{

    scanf("%d %d\n",&n,&k);

    cin >> s;
    int len = s.size();

    for(i = len - 1; i >= 0; i--)

    {

        if (s[i] == 'U') k = Uinv(k);

        else k = Dinv(k);

    }

    printf("%d\n",k);

    return 0;

}


