#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
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

    int root = INT_MIN;
    range(i, 2, N) {
        if (arr[i] < root) {
            cout << "0";
            return 0;
        }
        while(!s.empty() && s.top() < arr[i]) {
            root = s.top();
            s.pop();
        }
        s.push(arr[i]);
    }
    cout << "1";

    return 0;
}
