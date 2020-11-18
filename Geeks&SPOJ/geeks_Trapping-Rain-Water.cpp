#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              200005


using namespace std;

int N;
int arr[MX], _left[MX], _right[MX];
int result = 0;

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
    }

    _left[1] = arr[1];
    range(i, 2, N) {
        _left[i] = max(arr[i], _left[i-1]);
    }

    _right[N] = arr[N];
    rrange(i, N - 1, 1) {
        _right[i] = max(arr[i], _right[i+1]);
    }

    range(i, 1, N) {
        result += min(_left[i], _right[i]) - arr[i];
    }
    cout << result;

    return 0;
} 
