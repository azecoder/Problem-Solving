#include <bits/stdc++.h>

#define MX 1000000
using namespace std;

char s[MX];
int n = 0;
int main(int argc, char *argv[])
{
	cin.get(s,MX);
	int l = 0;
	for(int i = 0; s[i] != '\0'; i++)	l++;
	int k = l, j = 1; l = 1;
	
	for(int i = 1;i <= k; i += l){
		if(n >= 5)	l ++;
		n = s[i] - 48;
		j ++;
	}
	cout << j - 1 << endl;
	return 0;
}

