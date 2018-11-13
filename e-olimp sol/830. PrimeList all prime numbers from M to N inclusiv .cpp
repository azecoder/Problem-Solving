#include <iostream>
#include <math.h>
#define MX 300002
#define rep(i,n,m) for(int i = n; i <= m; ++i)
using namespace std;

int n, m, ind=0, ans[MX];
int isPrime(int x) {
    int sx = sqrt(x);
    for(int i = 2; i <=  sx; i++)
        if(x%i == 0)    return false;
    return true;
}
int main()
{
    cin >> n >> m;
    rep(i, n, m)
        if(isPrime(i)) ans[++ind] = i;
    rep(i, 1, ind)
        cout << ans[i] << endl;
    if(!ind)
        cout << "Absent\n";
    return 0;
}
