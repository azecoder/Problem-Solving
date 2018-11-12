#include <bits/stdc++.h>

using namespace std;

char ch;
int n, ob, cb; // count open and close brackets
stack <char> st;
int main ()
{
	cin >> n;
	while(n && cin >> ch) {
		if(ch == '(' || ch == '[' || ch == '{') {
			st.push(ch);
			ob ++;
		} else {
			cb ++;
			if(cb > ob) {
				cout << "No\n";	return 0;
			}
			if((st.top() == '(' && ch == ')') || (st.top() == '[' && ch == ']') || (st.top() == '{' && ch == '}')) {
				st.pop();
			} else {
				cout << "No\n";	return 0;
			}
		}
		n--;	
	}
	if(!st.empty() || ob != cb)	cout << "No\n";
	else	cout << "Yes\n";
	return 0;
}
