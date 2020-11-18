#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              200005


using namespace std;


int N, arr[MX];
map <int, int> cnt, heap1, heap2;
int c1 = 0, c2 = 0;

int main() {

    faster_io;

    cin >> N;
    int M = 2 * N;
    range(i, 1, M) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    range(i, 10, 99) {
        if(cnt[i] >= 2) {
            heap1[i] = heap2[i] = 1;
            c1++;
            c2++;
            cnt[i] -= 2;
        } else if(cnt[i] == 1) {
            if(c1 <= c2) {
                heap1[i] = 1;
                c1++;
                cnt[i]--;
            } else {
                heap2[i] = 1;
                c2++;
                cnt[i]--;
            }
        }
    }

    cout << c1 * c2 << "\n";

    range(i, 10, 99) {
        while(c1 < N && cnt[i] > 0) {
            heap1[i]++;
            cnt[i]--;
            c1++;
        }
        while(c2 < N && cnt[i] > 0) {
            heap2[i]++;
            cnt[i]--;
            c2++;
        }
    }

    int flag = 0;
    range(i, 1, M) {
        if(heap1[arr[i]]) {
            if(flag) cout << " ";
            flag = 1;
            cout << "1";
            heap1[arr[i]]--;
        } else if(heap2[arr[i]]) {
            if(flag) cout << " ";
            flag = 1;
            cout << "2";
            heap2[arr[i]]--;
        }
    }
    cout << "\n";

    return 0;
}
