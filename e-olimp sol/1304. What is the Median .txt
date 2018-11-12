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

vector<int> v;
int n,pos,len=0;

int main(int argc, char *argv[])
{
  while(scanf("%d",&n)==1)
  {
      len++;
      pos=lower_bound(v.begin(),v.end(),n)-v.begin();
      v.insert(v.begin()+pos,n);
      if(len & 1)
      printf("%d\n",v[len/2]);
      else
      printf("%d\n",(v[len/2] + v[len/2-1])/2);
  }

  
  return EXIT_SUCCESS;
}