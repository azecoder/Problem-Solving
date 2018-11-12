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

using namespace std;

#define size 1001

int main(int argc, char *argv[])
{
int a[size], i, n, say = 0;
cin >> n;
for(i=1; i<=n; i++)
   cin >> a[i];

for(i=2; i<=n; i++)
   if((a[i]<a[i-1]) && (a[i-1]>a[i-2]))  say++;

cout << say << endl;

    
return 0;
}