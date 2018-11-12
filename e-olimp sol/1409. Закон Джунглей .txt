#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



#define MAX 10000000




int main(void)
{

    char s[200];

    s[0] = '0';
    gets(s+1);
    int len = strlen(s);
    int cur = len - 1;

    while(s[cur] == '0') cur--;

    s[cur--]--;

    while(s[cur] == '9') cur--;


    s[cur]++;

    sort(s+cur+1,s+len);

    puts(s + (s[0] == '0'));

    return 0;

}


