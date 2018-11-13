#include <bits/stdc++.h>

using namespace std;

string a;
int len, ob, cb; // count open and close brackets
stack <char> st;
int main ()
{
	cin >> a;	len = a.length();
	for(int i = 0; i < len; i++) {
		if(a[i] == '(' || a[i] == '[' || a[i] == '{') {
			st.push(a[i]);
			ob ++;
		} else {
			cb ++;
			if(cb > ob) {
				cout << "NO\n";	return 0;
			}
			if((st.top() == '(' && a[i] == ')') || (st.top() == '[' && a[i] == ']') || (st.top() == '{' && a[i] == '}')) {
				st.pop();
			} else {
				cout << "NO\n";	return 0;
			}
		}
	}
	if(!st.empty() || ob != cb)	cout << "NO\n";
	else	cout << "YES\n";
	return 0;
}
