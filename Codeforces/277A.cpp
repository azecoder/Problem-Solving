#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(size_t i=a;i<=b;i++)
#define rrange(i,a,b)   for(size_t i=a;i>=b;i--)
#define rangev(i,a)     for(size_t i=0;i<a.size();i++)
#define rrangev(i,a)    for(size_t i=a.size()-1;i>=0;i--)
#define mp              make_pair
#define pb              push_back

using namespace std;

typedef vector <int> vi;


int N, M;
int k, x;
int lang_employee[105][105];
vi employee_lang[105];
int visited[105];

void dfs(int per) {
    visited[per] = 1;
    rangev(i, employee_lang[per]) {
        int clang = employee_lang[per][i];
        range(j, 1, N) {
            if(lang_employee[j][clang] && !visited[j]) {
                dfs(j);
            }
        }
    }
}

int main() {

    faster_io;

    cin >> N >> M;
    range(i, 1, N) {
        cin >> k;
        range(j, 1, k) {
            cin >> x;
            lang_employee[i][x] = 1;
            employee_lang[i].pb(x);
        }
    }

    int result = 0, flag = 0;
    range(i, 1, N) {
        if(employee_lang[i].size() == 0) {
            result++;
            continue;
        }
        if(!visited[i]) {
            // cerr << "\nW : " << i << "\n";
            result++;
            flag = 1;
            dfs(i);
        }
    }
    result = flag ? result - 1 : result;
    cout << result << "\n";

    return 0;
}
