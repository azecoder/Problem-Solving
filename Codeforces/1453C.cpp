#include <bits/stdc++.h>

#define rep(i,a) for(int i=0; i<a; i++)
#define rrep(i,a) for(int i=a-1; i>=0; i--)
#define range(i,a,b) for(int i=a; i<b; i++)
#define rrange(i,a,b) for(int i=a-1; i>=b; i--)
#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;


class Point {
public:
	int mnx, mnv, mxx, mxv;
	Point() {
		mnx = INT_MAX;
		mnv = INT_MAX;
		mxx = INT_MIN;
		mxv = INT_MIN;
	};
};

void run_case() {
	
	int n;
	cin >> n;
	
	vector<Point> a(11, Point()), b(11, Point());
	vi cnt(10, 0);
	
	for(int i=0; i<n; i++) {
		string ss;
		cin >> ss;
		for(int j = 0; j < n; j++) {
			int x = int(ss[j] - '0');
			cnt[x]++;
			if(i < a[x].mnx) {
				a[x].mnx = i;
				a[x].mnv = j;
			}
			if(i > a[x].mxx) {
				a[x].mxx = i;
				a[x].mxv = j;
			}
			if(j < b[x].mnv) {
				b[x].mnx = i;
				b[x].mnv = j;
			}
			if(j > b[x].mxv) {
				b[x].mxx = i;
				b[x].mxv = j;
			}
		}
	}
	
	cout << "cnt: ";
	for(int x: cnt)
		cout << x << " ";
	cout << "\n";
	
	vi area(10, 0);
	rep(i, 10) {
		if(cnt[i] < 2)
			continue;
			
		int dx = abs(a[i].mxx - a[i].mnx);
		int dv = abs(a[i].mxv - a[i].mnv);
	
		if(dx == 0 && dv == 0)
			continue;
			
		//cout << "a: " << i << " " << dx << " " << dv << "\n";
			
		if(dx == 0) {
			int ff =max(a[i].mxx - 0, n - 1 - a[i].mxx);
			area[i] = dv * ff;
		} else if(dv == 0) {
			int ff =max(a[i].mxv - 0, n - 1 - a[i].mxv);
			area[i] = dx * ff;
		} else {
			int ff1 = max(a[i].mxx - 0, n - 1 - a[i].mxx);
			int ff2 = max(a[i].mnx - 0, n - 1 - a[i].mnx);
			int ff = max(ff1, ff2);
			int a1 = dv * ff;
			int fff1 =max(a[i].mxv - 0, n - 1 - a[i].mxv);
			int fff2 = max(a[i].mnv - 0, n - 1 - a[i].mnv);
			int fff = max(fff1, fff2);
			int a2 = dx * fff;
			area[i] = max(a1, a2);
			if(n-ff1 == 0 || ff1 == 0 || n-ff2 == 0 || ff2 == 0)
				area[i] = max(area[i], ff1 * ff2);
			if(n-fff1 == 0 || fff1 == 0 || n-fff2 == 0 || fff2 == 0)
				area[i] = max(area[i], fff1 * fff2);
		}
	}
	
	vi area2(10, 0);
	rep(i, 10) {
		if(cnt[i] < 2)
			continue;
		
		int dx = abs(b[i].mxx - b[i].mnx);
		int dv = abs(b[i].mxv - b[i].mnv);
		
		if(dx == 0 && dv == 0)
			continue;
	
		//cout << "b: " << i << " " << dx << " " << dv << "\n";
	
		if(dx == 0) {
			int ff =max(b[i].mxx - 0, n - 1 - b[i].mxx);
			area2[i] = dv * ff;
		} else if(dv == 0) {
			int ff =max(b[i].mxv - 0, n - 1 - b[i].mxv);
			area2[i] = dx * ff;
		} else {
			int ff1 = max(b[i].mxx - 0, n - 1 - b[i].mxx);
			int ff2 = max(b[i].mnx - 0, n - 1 - b[i].mnx);
			int ff = max(ff1, ff2);
			int a1 = dv * ff;
			int fff1 =max(b[i].mxv - 0, n - 1 - b[i].mxv);
			int fff2 = max(b[i].mnv - 0, n - 1 - b[i].mnv);
			int fff = max(fff1, fff2);
			int a2 = dx * fff;
			area2[i] = max(a1, a2);	
			if(n-ff1 == 0 || ff1 == 0 || n-ff2 == 0 || ff2 == 0)
				area2[i] = max(area2[i], ff1 * ff2);
			if(n-fff1 == 0 || fff1 == 0 || n-fff2 == 0 || fff2 == 0)
				area2[i] = max(area2[i], fff1 * fff2);
		}
	}
	
	
	//for(int x: area)
		//cout << x << " ";
	//cout << "\n";
	//for(int x: area2)
		//cout << x << " ";
	//cout << "\n";
	
	rep(i, 10)
		cout << max(area[i], area2[i]) << " ";
	cout << "\n";
	
	
}

int main() {
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
