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

#define MAX 101

int main(int argc, char *argv[])
{
  int i,n;
  string a[MAX];

  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
      sort(a+1,a+6);

      if(a[1]==a[2] && a[2]==a[3] && a[3]==a[4] && a[4]==a[5])
      cout<<"poker"<<endl;
      else if((a[1]==a[2] && a[2]==a[3] && a[3]==a[4] && a[4]!=a[5]) || (a[2]==a[3] && a[3]==a[4] && a[4]==a[5] && a[1]!=a[2]))
      cout<<"quads"<<endl;
      else if((a[1]==a[2] && a[2]==a[3] && a[3]!=a[4] && a[4]==a[5]) || (a[3]==a[4] && a[4]==a[5] && a[1]!=a[3] && a[1]==a[2]))
      cout<<"full house"<<endl;
      else if((a[1]==a[2] && a[2]==a[3] && a[3]!=a[4] && a[4]!=a[5]) || (a[1]!=a[2] && a[2]==a[3] && a[3]==a[4] && a[4]!=a[5]) || (a[3]==a[4] && a[4]==a[5] && a[1]!=a[2] && a[2]!=a[3]))
      cout<<"set"<<endl;
      else if((a[1]==a[2] && a[3]==a[4] && a[1]!=a[3] && a[4]!=a[5]) || (a[2]==a[3] && a[4]==a[5] && a[1]!=a[2] && a[3]!=a[4]) || (a[1]==a[2] && a[4]==a[5] && a[2]!=a[3] && a[3]!=a[4]))
      cout<<"two pair"<<endl;
      else if((a[1]==a[2] && a[2]!=a[3] && a[3]!=a[4] && a[4]!=a[5]) || (a[2]==a[3] && a[1]!=a[2] && a[3]!=a[4] && a[4]!=a[5]) || (a[3]==a[4] && a[1]!=a[2] && a[2]!=a[3] && a[4]!=a[5]) || (a[4]==a[5] && a[1]!=a[2] && a[2]!=a[3] && a[3]!=a[4]))
      cout<<"pair"<<endl;
      else
      cout<<"no pair"<<endl;
  }
  
  
   
   return EXIT_SUCCESS;
}