#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)


using namespace std;


int N;
int arr[MX];

int mergeArr(int left, int right) {
    int cnt = 0, mid = (left + right) / 2;
    int ind = 0, lind = left, rind = 1 + mid;
    int temp[right - left + 2];
    while(lind <= mid && rind <= right) {
//        cerr << "\tl : " << lind << " - r : " << rind << "\n";
        if(arr[lind] <= arr[rind]) {
            temp[ind++] = arr[rind++];
        } else {
//            cerr << "\t" << arr[lind] << " > " << arr[rind] << " : " << right - rind + 1 << "\n";
            temp[ind++] = arr[lind++];
            cnt += (right - rind + 1);
        }
    }
    range(i, lind, mid) {
        temp[ind++] = arr[i];
    }
    range(i, rind, right) {
        temp[ind++] = arr[i];
    }
    range(i, left, right) {
        arr[i] = temp[i-left];
    }
    return cnt;
}

void mergeSort(int left, int right, int &counter) {
    if (left == right) {
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(left, mid, counter);
    mergeSort(mid+1, right, counter);

//    cerr << left << " : " << mid << " : " << right << "\n";
    counter += mergeArr(left, right);
//    cerr << left << " : " << mid << " : " << right << " - " << counter << "\n\n\n";
}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
    }
    int result = 0;
    mergeSort(1, N, result);
    cout << result;

    return 0;
}
