#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define rep(i,a)        for(int i=0;i<a;i++)
#define rrep(i,a)       for(int i=a-1,i>=0;i--)
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define mp              make_pair
#define pb              push_back
#define MX              200005


using namespace std;

typedef long long ll;
typedef vector <int> vi;

int toAlphIndex(char ch) {
    return int(ch - 'a' + 1);
}

char toAlphChar(int ind) {
    return char(ind - 1 + 'a');
}

int N;
string str[MX];

vi change[28], alph;
bool visited[28], used[28];

void check(int ind) {

    string A = str[ind], B = str[ind + 1];
    int cs = A.size(), ns = B.size();
    int ms = min(cs, ns);

    rep(i, ms) {
        if(A[i] != B[i]) {
            // cerr << "\nIND : " << ind << " A : " << A[i] << " B : " << B[i] << "\n";
            change[toAlphIndex(B[i])].pb(toAlphIndex(A[i]));
            return;
        }
    }

    if(cs > ns) {
        cout << "Impossible";
        exit(0);
    }

}

void dfs(int ind) {

    visited[ind] = used[ind] = 1;
    rangev(i, change[ind]) {
        int new_ind = change[ind][i];
        if(used[new_ind]) {
            cout << "Impossible";
            exit(0);
        }
        if(!visited[new_ind]) {
            dfs(new_ind);
        }
    }
    used[ind] = 0;
    alph.pb(ind);

}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> str[i];
    }

    range(i, 1, N - 1) {
        check(i);
    }

    range(i, 1, 26) {
        if(!visited[i]) {
            dfs(i);
        }
    }

    rangev(i, alph) {
        cout << toAlphChar(alph[i]);
    }

    return 0;
}
