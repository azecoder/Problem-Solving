#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              1000005


using namespace std;

typedef long long ll;


int N, arr[MX];
ll sum = 0;
int cnt[MX];

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
        sum += arr[i];
    }

    if(sum % 3) {
        cout << "0";
        return 0;
    }

    int psum = sum /= 3; // part sum
    ll csum = 0;
    rrange(i, N, 1) {
        csum += arr[i];
        if(csum == psum) {
            cnt[i] = 1;
        }
    }
    rrange(i, N-1, 1) {
        cnt[i] += cnt[i+1];
    }

    ll res = 0;
    csum = 0;
    range(i, 1, N - 2) {
        csum += arr[i];
        if(csum == psum) {
            res += cnt[i + 2];
        }
    }
    cout << res;

    return 0;
} 
