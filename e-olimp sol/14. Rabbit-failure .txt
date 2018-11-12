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

int main(int argc, char *argv[])
{
  long long n,i,j,m,x,y,yadda,flag=0,flag1=0,yadda1,yadda2;
  char a[8],b[8];
  cin>>n;
  cin>>a;
  
  n--;
  x=strlen(a);
  m=atoi(a);
  yadda2=m;

  while(flag1==0)
  {
      i=m+1;
      flag=0;

      for(j=2; j<=sqrt(i); j++)
      if(i%j==0)
      {
          flag=1;
          break;
      }

      if(flag==0)
      {
          yadda=i;
          flag1=1;
      }

      m++;
  }

  yadda1=yadda-yadda2;
  itoa(yadda,a,10);


  if(n>=yadda1 && strlen(a)<=x)
          cout << yadda1-1 << endl;
  else
          cout << "-1" << endl;


   
   return 0;
}