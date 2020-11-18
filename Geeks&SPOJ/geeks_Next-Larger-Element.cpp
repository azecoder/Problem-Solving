#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define MX              200005


using namespace std;

int N;
int arr[MX];
stack <int> s;

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
    }

    s.push(arr[1]);
    range(i, 2, N) {
        while(!s.empty() && s.top() < arr[i]) {
            cout << arr[i] << " ";
            s.pop();
        }
        s.push(arr[i]);
    }
    while(!s.empty()) {
        cout << "-1 ";
        s.pop();
    }

    return 0;
} 
