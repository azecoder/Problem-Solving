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

# define MAX 101
int N,M,t,i,c[MAX],j;

int main(int argc, char *argv[])
{
  cin >> t;
  while(t--)
  {   
         cin >> N >> M;
      if(N%(M+1) == 0)         c[i] = 2;
      else                        c[i] = 1;
      i++;
  }
  for(j = 0;j < i;j ++)
      cout << c[j];
  cout << endl;


   return EXIT_SUCCESS;
}