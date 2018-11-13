#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>

#define MAXN 150005
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> pr;

set<pr> S;
int a[MAXN];
int ans[MAXN];
int n , k , l;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i) {
        S.insert(mp(a[i] , i));
    }
    ans[l++] = (*S.begin()).first;
    for (int i = k; i < n; ++i) {
        S.erase(mp(a[i - k] , i - k));
        S.insert(mp(a[i] , i));
        ans[l++] = (*S.begin()).first;
    }
    for (int i = 0; i < l - 1; ++i)
        cout << ans[i] << " ";
    cout << ans[l - 1] << endl;
    return 0;
}
