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

#define MAX 10001
#define ll long long

int main(int argc, char *argv[])
{
  int list[MAX],a[MAX],cavab[MAX],i,j,l,max_id=1,say=0,n,m;

  cin>>n;
  for(i=1; i<=n; i++)
      cin>>a[i];

  for(i=1; i<=n; i++)
      list[i]=1;

  for(i=1; i<=n; i++)
      for(j=1; j<i; j++)
          if(a[i]>a[j])
              list[i]=max(list[j]+1,list[i]);

  for(i=1; i<=n; i++)
      if(list[i]>list[max_id])
          max_id=i;

  l=list[max_id]-1;
  m=max_id;
  cout<<list[max_id]<<endl;
  cavab[say++]=a[m];
  for(i=max_id-1; i>=1; i--)
      if(a[i]<a[m] && list[i]==l)
      {
          m=i;
          l--;
          cavab[say++]=a[i];
      }
  for(i=say-1; i>0; i--)
      cout<<cavab[i]<<" ";
  cout<<cavab[0]<<endl;


   
   return EXIT_SUCCESS;
}