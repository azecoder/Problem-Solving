#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

# define SIZE 20
# define MAX(A,B) A>B?A:B;

double a,b,x,y,s1,s2,s3,s4;

int main()
{
  cin >> a >> b >> x >> y;

  s1 = fabs(b * a);
  s2 = fabs((y - b) * a);
  s3 = fabs((y - b) * (x - a));
  s4 = fabs(b * (x - a));


  cout.setf(ios::fixed);
  cout.precision(3);
  cout << s1 << " " << s2 << " " << s3 << " "<< s4 << endl;


   
   return EXIT_SUCCESS;
}