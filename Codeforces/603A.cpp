#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)

using namespace std;


int N, result = 0;
string str;

int main() {

    faster_io;

    cin >> N >> str;
    range(i, 1, str.size() - 1) {
        result += (str[i] == str[i - 1]);
    }
    result = min(N, N - result + 2);
    cout << result;

    return 0;
}
