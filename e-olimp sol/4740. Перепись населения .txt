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

#define MAX 100001
#define size 1002
#define ull unsigned long long

int main(int argc, char *argv[])
{
  ull a[MAX],b[size],i,n,max;
  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>a[i];
      b[a[i]]++;
  }

  max=b[0];
  for(i=1; i<=1000; i++)
  if(b[i]>max)
  max=b[i];

  for(i=0; i<=1000; i++)
  if(b[i]==max)
  {
      cout<<i<<endl;
      break;
  }



  return EXIT_SUCCESS;
}