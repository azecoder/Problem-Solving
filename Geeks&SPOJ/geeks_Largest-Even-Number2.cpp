#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define rep(i,a)        for(int i=0;i<a;i++)
#define rrep(i,a)       for(int i=a-1,i>=0;i--)
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)


using namespace std;


int N;

string reverseString(string str) {
    int n = str.length();
    rep(i, n / 2) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

string solveBabul(string val) {
    multiset <int> s;
    multiset <int> :: iterator it;
    int min_even = 99;
    rep(i, val.size()) {
        int x = (int)(val[i] - '0');
        if((x % 2) == 0) {
            min_even = min(min_even, x);
        }
        s.insert(x);
    }
    string res = "";
    if(min_even == 99) {
        int ind = 0;
        for(it = s.begin(); it != s.end(); ++it) {
            res += (char)(*it + '0');
        }
    } else {
        int ind = 0, flag = 0;
        for(it = s.begin(); it != s.end(); ++it) {
            if(*it == min_even && !flag) {
                flag = 1;
                continue;
            } else {
                res += (char)(*it + '0');
            }
        }
        res = (char)(min_even + '0') + res;
    }

    string ret_str = reverseString(res);

    return ret_str;
}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        string read_str;
        cin >> read_str;
        cout << solveBabul(read_str) << "\n";
    }

    return 0;
}
