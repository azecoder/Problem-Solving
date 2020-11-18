#include <bits/stdc++.h>
 
#define MX 1e4+5
 
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
 
 
void solve() {
    //
    int n;
    cin >> n;
    
    vi a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a.begin(), a.end());
    for(int i = 0; i < n-1; i++)
        if(a[i] == a[i+1]) {
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
}
 
 
int main() {
    
    int T;  
    cin >> T;
    while(T--)
        solve();
 
    return 0;
}