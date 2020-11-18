#include <iostream>
#include <stdio.h>

#define MAXN 1000005

using namespace std;

typedef long long ll;

ll tree[MAXN];
int n , m;

void add(int idx , int x) {
    for (;idx <= MAXN; idx += idx & -idx) {
        tree[idx] += x;
    }
}

ll get(int idx) {
    ll sum = 0;
    for (;idx > 0; idx -= idx & -idx) {
        sum += tree[idx];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        add(i , x);
    }
    for (int i = 0; i < m; ++i) {
        char ch; int x , y;
        cin >> ch >> x >> y;
        if (ch == '+')
            add(x , y);
        if (ch == '?')
            cout << get(y) - get(x - 1) << endl;
    }
    return 0;
}
