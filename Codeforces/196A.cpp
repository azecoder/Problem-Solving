#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rangev(i,a)     for(int i=0;i<a.size();i++)

using namespace std;

typedef vector <int> vi;


string str;
vi mv;

int main() {

    faster_io;

    cin >> str;
    range(i, 0, str.size() - 1) {
        int cur = str[i] - 'a';
        while(!mv.empty() && mv[mv.size() - 1] < cur) {
            mv.pop_back();
        }
        mv.push_back(cur);
    }
    rangev(i, mv) {
        cout << (char)(mv[i] + 'a');
    }

    return 0;
}
