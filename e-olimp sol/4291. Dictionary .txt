#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

#define LL __int64
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

int n,cnt,com[110][110];
string a,b;

void solve() {
    int la,lb,ax,bx;
    bool flag = true;
    cin >> a;
    for(int i = 2; i <= n; i++) {
        cin >> b;
        if(!flag)
            continue;
        la = a.size(), lb = b.size();
        ax = bx = 0;
        while(ax < la && bx < lb) {
            int p = a[ax]-'a' + 1, q = b[bx] - 'a' + 1;
            if(p != q) {
                com[p][q] = 1;
                break;
            }
            ax++, bx++;
        }
        if(bx == lb && la > lb) {
            flag = false;
        }
        a = b;
    }
    for(int k = 1; k <= 30; k++) {
        for(int i = 1; i <= 30; i++) {
            for(int j = 1; j <= 30; j++) {
                if(i == j || com[i][j]) continue;
                com[i][j] = (com[i][k] & com[k][j]);
            }
        }
    }
    for(int i = 1; i <= 30; i++) {
        for(int j = 1; j <= 30; j++) {
            if(com[i][j] == 1 && com[i][j] == com[j][i]) {
                flag = false;
                break;
            }
        }
        if(!flag)   break;
    }
    if(flag)    cout << "yes" << endl;
    else        cout << "no" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    while(cin >> n , n)
    {
        clr(com,0);
        solve();
    }
    return 0;
}
