#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define MX              200005


using namespace std;

int N, K;
int arr[MX];
multiset <int> s;
multiset <int>::iterator it;

int main() {

    faster_io;

    cin >> N >> K;
    range(i, 1, N) {
        cin >> arr[i];
        if(i <= K)
            s.insert(arr[i]);
    }

    it = s.end();
    it--;
    cout << *it << " ";
    range(i, K + 1, N) {
        s.erase(s.find(arr[i - K]));
        s.insert(arr[i]);
        it = s.end();
        it--;
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
} 
