#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              300005


using namespace std;

typedef long long ll;


int N, Q;
int arr[MX], cnt[MX];

int main() {

    faster_io;

    cin >> N >> Q;
    range(i, 1, N) {
        cin >> arr[i];
    }
    range(i, 1, Q) {
        int l, r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r+1]--;
    }
    range(i, 1, N) {
        cnt[i] += cnt[i-1];
    }
    sort(arr + 1, arr + N + 1);
    sort(cnt + 1, cnt + N + 1);

    ll res = 0;
    range(i, 1, N) {
        res += 1ll * arr[i] * cnt[i];
    }
    cout << res;

    return 0;
}
