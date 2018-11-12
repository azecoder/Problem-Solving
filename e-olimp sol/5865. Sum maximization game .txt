#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#pragma comment(linker,"/STACK:56777216")

using namespace std;

int n,a[2500],v[2500][2500],sum[2500][2500],sum1[2500];

int main()
{
  cin>>n;
  
  for(int i=1;i<=n;i++)
      cin>>a[i];
  
  for(int i=1;i<=n;i++)
      sum1[i]=sum1[i-1]+a[i];
  for(int i=1;i<=n;i++)
  for(int j=i;j<=n;j++)
      sum[i][j]=sum1[j]-sum1[i-1];
  
  
  for(int i=1;i<=n;i++)
  for(int j=1;j<=n && j+i-1<=n;j++)
      {
          v[i][j]=max(a[j]+sum[j+1][j+i-1]-v[i-1][j+1],a[j+i-1]+sum[j][j+i-2]-v[i-1][j]);
      }
  
  cout<<v[n][1]<<endl;
  

  return 0;
}