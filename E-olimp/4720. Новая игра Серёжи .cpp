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

  int x1,Y1,x2,y2,x3,y3,x4,y4,x5,y5;

int main(int argc, char *argv[])
{
  cin >> x1 >> Y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
  
  if(x5 > x3 && x5 < x4 && y5 < y3 && y5 > y4)                   cout << "SAD" << endl;
  else if(x5 >= x1 && x5 <= x2 && y5 <= Y1 && y5 >= y2)        cout << "HAPPY" << endl;
  else                                                            cout << "SAD" << endl;
  

  return EXIT_SUCCESS;
}