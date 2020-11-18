/*
    t.hajiyev@studenti.unipi.it
*/

#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define rep(i,a)        for(int i=0;i<a;i++)
#define rrep(i,a)       for(int i=a-1,i>=0;i--)
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define clr(a)          memset(a, 0, sizeof(a))
#define all(a)          a.begin(), a.end()
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second
#define MX              200005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


int getPartition(int *arr, int low, int high) {
    int pivot = arr[high];
    int idx = low;
    range(i, low, high - 1) {
        if(pivot > arr[i]) {
            swap(arr[i], arr[idx]);
            idx++;
        }
    }
    swap(arr[high], arr[idx]);
    return idx;
}

void quickSort(int *arr, int low, int high) {
    if(low < high) {
        int partition_Index = getPartition(arr, low, high);
        quickSort(arr, low, partition_Index - 1);
        quickSort(arr, partition_Index + 1, high);
    }
}

int main() {
    int arr[7] = {9, 3, 2, 5, 1, 7, 3};
    quickSort(arr, 0, 7);
    rep(i, 7) cout << arr[i] << " ";
}
