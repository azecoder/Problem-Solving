#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;


int n, x;

int main()
{

    vector<pair<int, int> > v;

    cin >> n;

    v.resize(n);

    rep(i, 0, n - 1)
    {

        cin >> x;

        v[i] = make_pair(x,i+1);

    }



    sort(v.begin(),v.end());



    int res = 2e9;
    int a, b;

    rep(i, 1, n - 1)
    {

        if (v[i].first - v[i-1].first < res) {

            res = v[i].first - v[i-1].first;

            a = v[i].second;
            b = v[i-1].second;

        }
    }


    printf("%d\n%d %d\n",res,a,b);
    return 0;
}
