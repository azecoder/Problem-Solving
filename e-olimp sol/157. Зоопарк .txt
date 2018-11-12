#include <iostream>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

int n, ans = 0;
int main()
{
    cin >> n;
    rep(i, n-1) ans += (n-i-2);
    cout << ans * 2 << endl;
    return 0;
}
