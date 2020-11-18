#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)

using namespace std;

int N;

int main() {

    faster_io;

    cin >> N;
    int result = N * (N + 1) / 2;
    range(i, 2, N) {
        int x;
        cin >> x;
        result -= x;
    }
    cout << result;

    return 0;
} 
