#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define MX              200005


using namespace std;

typedef long long ll;


class Tree {
public:
    ll *arr, *temp;
    int len;
    Tree() {};
    Tree(int inp_len, int *inp_arr);
    void create();
    void update(int ll, int rr, int val);
    int getMin(int ll, int rr);
private:
    void create(int left, int right, int index);
    void update(int ll, int rr, int val, int left, int right, int index);
    int getMin(int ll, int rr, int left, int right, int index);
};

Tree::Tree(int inp_len, int *inp_arr) {
    arr = new ll[inp_len];
    range(i, 1, inp_len) {
        arr[i] = inp_arr[i];
    }
    temp = new ll[4 * inp_len];
    len = inp_len;
}

void Tree::create() {
    create(1, len, 1);
}

void Tree::create(int left, int right, int index) {
    if(left == right) {
        temp[index] = arr[left];
        return;
    }

    int mid = (left + right) / 2;
    create(left, mid, index * 2);
    create(mid + 1, right, index * 2 + 1);

    temp[index] = min(temp[index * 2], temp[index * 2 + 1]);
}

int Tree::getMin(int ll, int rr) {
    return getMin(ll, rr, 1, len, 1);
}

void Tree::update(int ll, int rr, int val) {
    update(ll, rr, val, 1, len, 1);
}

void Tree::update(int ll, int rr, int val, int left, int right, int index) {
    if(ll > len || ll > rr || rr < 0) {
        cerr << "INVALID INPUT\n";
        return;
    }

    if(left > rr || right < ll) {
        return;
    }

    if(left >= ll && right <= rr && left == right) {
        temp[index] += val;
        return;
    }

    int mid = (left + right) / 2;
    update(ll, rr, val, left, mid, index * 2);
    update(ll, rr, val, mid + 1, right, index * 2 + 1);
    temp[index] = min(temp[index * 2], temp[index * 2 + 1]);
    return;
}

int Tree::getMin(int ll, int rr, int left, int right, int index) {
    if(ll > len || ll > rr || rr < 0) {
        cerr << "INVALID INPUT\n";
        return -1;
    }

    if(left >= ll && right <= rr) {
        return temp[index];
    }

    if(left > rr || right < ll) {
        return INT_MAX;
    }

    int mid = (left + right) / 2;
    int t1 = getMin(ll, rr, left, mid, index * 2);
    int t2 = getMin(ll, rr, mid + 1, right, index * 2 + 1);
    return min(t1, t2);
}


int N, M;
int arr[MX];

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
    }

    Tree *tree = new Tree(N, arr);
    tree->create();

    cin >> M;
    range(i, 0, M) {    // because first line is empty, so M+1 line

        int ind = 0, numbers[4], sign = 1;
        string line;
        getline(cin, line);
        line += " ";
        numbers[ind] = 0;
        rangev(ii, line) {
            if(isdigit(line[ii]) && line[ii-1] == ' ') {
                sign = 1;
            } else if(isdigit(line[ii]) && line[ii-1] == '-') {
                sign = -1;
            }
            if(isdigit(line[ii-1]) && line[ii] == ' ') {
                numbers[++ind] = 0;
            } else if(isdigit(line[ii])) {
                numbers[ind] = numbers[ind] * 10 + sign * (int)(line[ii] - '0');
            }
        }

        int x = numbers[0] + 1, v = numbers[1] + 1;
        if (ind == 3) {
            int val = numbers[2];
            if(v >= x) {
                tree->update(x, v, val);
            } else {
                tree->update(x, N, val);
                tree->update(1, v, val);
            }
        } else if(ind == 2) {
            if(v >= x) {
                cout << tree->getMin(x, v) << "\n";
            } else {
                cout << min(
                         tree->getMin(x, N),
                         tree->getMin(1, v)
                     ) << "\n";
            }
        }
    }

    return 0;
}

