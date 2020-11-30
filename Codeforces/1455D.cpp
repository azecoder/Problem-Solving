#include <bits/stdc++.h>

#define range(a,b,c,d)  for(int a=b; a<=c; a+=d)
#define rrange(a,b,c,d) for(int a=b; a>=c; a-=d)
#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;




void solve() {
	//
	int n, x;
	cin >> n >> x;
	
	vi a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	auto get_first = [&] {
        for (int i = 0; i < n; i++)
            if (a[i] > x)
                return i;
 
        return -1;
    };
    
    int cnt = 0;
    while(!is_sorted(a.begin(), a.end())) {
		int idx = get_first();
		
		if(idx < 0)
			break;
		
		swap(a[idx], x);
		cnt++;
	}
	
	if(is_sorted(a.begin(), a.end())) {
		cout << cnt << "\n";
		return;
	}
	cout << "-1\n";
}


int main() {
	//
	ios_base::sync_with_stdio(false);
	int T;	
	cin >> T;
	while(T--)
		solve();

	return 0;
}
