#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;




#define MAX 110

ll n, dim;
ll a[100001], b[100001];
ll d[100001];

int main(void)
{

    scanf("%lld",&n);

    for(ll test = 0; test < n; test++)

    {

        scanf("%lld",&dim);

        for(ll i = 0; i < dim; i++) scanf("%lld",&a[i]);

        for(ll i = 0; i < dim; i++) scanf("%lld",&b[i]);


        for(ll i = 0; i < dim; i++) d[i] = (a[i] > b[i]) ? a[i] - b[i] : b[i] - a[i];

        ll res = 0;



        for(ll i = 1; i < 1<<dim; i++) {

            ll ptr = 0, temp = 0, cnt = 0;
            ll j = i;

            while(j > 0) {

                if (j % 2) {

                    temp = __gcd(temp,d[ptr]);

                    cnt++;

                }

                ptr++;
                j /= 2;

            }

            res += (cnt % 2) ? temp : -temp;

        }

        printf("Case %lld: %lld\n",test+1,res);

    }

    return 0;

}


