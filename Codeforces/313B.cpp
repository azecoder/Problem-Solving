#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              200005


using namespace std;

string word;
int N;
int dp[MX];

void check() {
    int len = word.size();
    range(i, 1, len - 1) {
        dp[i] = (word[i] == word[i - 1]) ? dp[i - 1] + 1 : dp[i - 1];
    }
}

int main() {

    faster_io;

    cin >> word >> N;
    check();
    range(i, 1, N) {
        int ll, rr;
        cin >> ll >> rr;
        cout << dp[--rr] - dp[--ll] << "\n";
    }

    return 0;
}
