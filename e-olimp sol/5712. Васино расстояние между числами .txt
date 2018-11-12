#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

#define size 201
char a[size], b[size];

int main(int argc, char *argv[])
{
   int n, m;
       cin >> n >> m;
   itoa(n, a, 2);  
   itoa(m, b, 2);
   int la = strlen(a); strrev(a);
   int lb = strlen(b); strrev(b);
   int maxx;  la > lb ? maxx = la : maxx = lb;
   
   for(int i = la; i < maxx; i++)  a[i] = '0';
   for(int i = lb; i < maxx; i++)  b[i] = '0';
   int cnt = 0;
   for(int i = 0; i < maxx; i++)
       if(a[i] != b[i]) cnt++;
       
   cout << cnt << endl;
   
   
   return EXIT_SUCCESS;
}