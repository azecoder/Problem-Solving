#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <map>
#include <set>

#define MAXN 10001
#define clr(a, b) memset(a, b, sizeof(a))

#define pb push_back

using namespace std;

char ch;
vector <char> g;

int main()
{
   //cout << int('a')<< " " << int('A') << " "  << int('z')<< " " << int('Z') << endl;

   while(scanf("%c", &ch) != EOF) {
       if(ch >= 97 && ch <= 122)
           ch = char(int(ch) - 32);
       else if(ch >= 65 && ch <= 90)
           ch = char(int(ch) + 32);
       g.pb(ch);
   }
   for(int i = 0; i < g.size(); i++)
       cout << g[i];

   return 0;
} 