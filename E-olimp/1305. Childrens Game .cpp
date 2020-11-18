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
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

char m[100];
string s[100];
int n, i;

int f(string a, string b)
{
   return a + b > b + a;
}

int main(int argc, char *argv[])
{
  while(scanf("%d",&n),n)
  {
      for(i = 0; i < n; i++)
      { 
          scanf("%s",m);
          s[i] = string(m);
      }
  sort(s,s+n,f);
  for(i = 0; i < n; i++) 
      printf("%s",s[i].c_str());
  printf("\n");
  }

   
   return EXIT_SUCCESS;
}