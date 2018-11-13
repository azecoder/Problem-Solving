#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <ctime>
/*#include <bits/stdc++.h>*/

#define faster_io ios_base::sync_with_stdio(false);cin.tie();
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define for_each(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define rall(a) (a).rbegin(), (a).rend()
#define sq(a) (a * a)
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define MX 40010

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;


using namespace std;



ll ind = 0, arr[1000000];

ll gcd (long long int a,long long int b)
{
    long long int temp;
    if (b>a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(b,a%b);
}


ll factor (ll p)
{
    ll count = 1;
    for (ll i = 2; i <= sqrt(p); i++)
    {
        long long int c = 0,flag = 0;
        while (p%i == 0)
        {
            c++;
            arr[ind] = i;
            p = p/i;
            flag = 1;
            if (p%i != 0)
            {
                ind++;
            }
        }
        if (flag == 1)
        {
            count = count*(c+1);
            flag = 0;
        }
    }
    if (p != 1)
    {
        arr[ind++] = p;
        count = count*2;
    }
    return count;
}


ll facto (ll q)
{
    ll count = 1;
    for (ll i = 0; i < ind; i++)
    {
        ll x = 0,flag = 0;
        while (q%arr[i] == 0)
        {
            x++;
            flag = 1;
            q = q/arr[i];
        }
        if (flag == 1)
        {
            count = count*(x+1);
            flag = 0;
        }
    }
    return count;
}


ll n,q,l,i;

int main()
{

    faster_io;

    cin >> n >> q;
    l = factor(n);


    rep(i, 1, q)
    {
        ll t,k;
        cin >> t >> k;
        if (t == 1)
        {
            ll gc,gcc;
            gc = gcd (n,k);
            gcc = facto(gc);
            printf ("%lld\n",gcc);
        }
        if (t == 2)
        {
            ll pi=1;
            if (n%k != 0)
                pi = 0;
            else if (n==k)
                pi = 1;
            else
                pi = facto(n/k);
            printf ("%lld\n",pi);
        }
        if (t == 3)
        {
            ll div = 1;
            if (n%k != 0)
                div = 0;
            else if (n == k)
                div = 1;
            else
                div = facto(n/k);
            printf ("%lld\n",l-div);
        }
    }
    return 0;

}












