#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)

using namespace std;


string str;

int main() {

    faster_io;

    cin >> str;

    range(i, 0, str.size() - 1) {

        if(str[i] == '1'
                || (str[i] == '4' && i > 0 && str[i - 1] == '1')
                || (str[i] == '4' && i > 1 && str[i - 1] == '4' && str[i - 2] == '1')
          ) {
            continue;
        } else {
            cout << "NO";
            return 0;
        }

    }

    cout << "YES";

    return 0;
}
