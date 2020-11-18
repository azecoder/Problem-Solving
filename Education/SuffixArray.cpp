#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef pair<char, int> pci;
typedef vector<pci> vci;


int main() {

	string s;
	cin >> s;
	
	s += "$";
	int n = s.size();
	
	vi sufInd(n), sufClass(n);
	{
		vci sufArr(n);
		for(int i = 0; i < n; i++)
			sufArr[i] = {s[i], i};
		sort(sufArr.begin(), sufArr.end());
		
		for(int i = 0; i < n; i++)
			sufInd[i] = sufArr[i].second;
			
		sufClass[sufInd[0]] = 0;
		for(int i = 1; i < n; i++)
			if (sufArr[i].first == sufArr[i-1].first)
				sufClass[sufInd[i]] = sufClass[sufInd[i-1]];
			else
				sufClass[sufInd[i]] = sufClass[sufInd[i-1]] + 1;
	}
	
	int k = 0;
	while((1 << k) < n) {
		vector<pair<pii, int>> sufArr(n);
		for(int i = 0; i < n; i++)
			sufArr[i] = {{sufClass[i], sufClass[(i + (1 << k)) % n]}, i};
		sort(sufArr.begin(), sufArr.end());
		
		for(int i = 0; i < n; i++)
			sufInd[i] = sufArr[i].second;
		
		sufClass[sufInd[0]] = 0;
		for(int i = 1; i < n; i++)
			if (sufArr[i].first == sufArr[i-1].first)
				sufClass[sufInd[i]] = sufClass[sufInd[i-1]];
			else
				sufClass[sufInd[i]] = sufClass[sufInd[i-1]] + 1;
	
		k++;
	}
	
	for(int x: sufInd)
		cout << x << " ";
	cout << "\n";

	return 0;
}
