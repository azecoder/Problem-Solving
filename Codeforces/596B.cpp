#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)

using namespace std;

typedef long long ll;


int N, x, v = 0;
ll result = 0;

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> x;
        x += v;
        result += abs(x);
        v -= x;
    }
    cout << result;

    return 0;
}
