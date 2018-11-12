#include <bits/stdc++.h>

#define FOR(ii, nn) for(int ii = 0; ii < nn; ii++)
using namespace std;

int n, a[101], ans = 0;
map<int, int> v1, v2;
int main() {
	cin >> n;
	FOR(i, n)	cin >> a[i];
	FOR(i, n)	FOR(j, n)	FOR(k, n)	v1[a[i]*a[j]+a[k]]++;
	FOR(i, n)	FOR(j, n)	FOR(k, n)	if(a[k] != 0)	v2[(a[i]+a[j])*a[k]]++;
	for(map<int, int>::iterator it = v1.begin(); it != v1.end(); ++it)
		ans += (it->second) * v2[it->first];
	cout << ans << endl;
	return 0;
}
