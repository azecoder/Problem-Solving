#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define rep(i,a)        for(int i=0;i<a;i++)
#define rrep(i,a)       for(int i=a-1,i>=0;i--)
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)


using namespace std;


int N;
int arr[11];

void init() {
    range(i, 0, 9) {
        arr[i] = 0;
    }
}

void printBabul(string val) {

    rep(i, val.size()) {
        int x = (int)(val[i] - '0');
        arr[x]++;
    }
    int min_even = 0, flag = 0;
    while( min_even < 10 ) {
        if( arr[min_even] > 0 ) {
            flag = 1;
            arr[min_even]--;
            break;
        }
        min_even += 2;
    }

    rrange(i, 9, 0) {
        range(j, 1, arr[i]) {
            cout << i;
        }
    }
    if(flag)
        cout << min_even;
    cout << "\n";

    init();

}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        string read_str;
        cin >> read_str;
        printBabul(read_str);
    }

    return 0;
}
