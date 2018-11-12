#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cstring>
#include <memory.h>
#include <algorithm>
#include <set>

using namespace std;

int mcnt = 0, cnt = 0;

int main()
{
   string s;
   cin >> s;
   for(int i = 0; i < s.length(); i++) {
       if(s[i] == 'k')
           cnt ++;
       else {
           mcnt = max(mcnt, cnt);
           cnt = 0;
       }
   }
   mcnt = max(mcnt, cnt);
   cout << mcnt << endl;

   return 0;
} 