#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

using namespace std;

double x, y, d, dis;
int main()
{
   cin >> x >> y >> d;
   dis = sqrt(x*x + y*y);
   
   if(dis < d)
       dis += d;
   cout << ceil(dis/d) << endl;
   return 0;
} 
