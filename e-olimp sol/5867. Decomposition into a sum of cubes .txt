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

int a[1000100],v[101],n;

int main()
{
  for(int i=1;i<=1000000;i++)    a[i]=10000000;
  for(int i=1;i<=100;i++)        a[i*i*i]=1;
  for(int i=1;i<=100;i++)        v[i]=i*i*i;
  for(int i=2;i<=1000000;i++)
      {
          if(a[i]!=1)
              for(int j=1;j<=100 && v[j]<=i;j++)
                  a[i]=min(a[i],1+a[i-v[j]]);
      }
  
  cin>>n;
  cout<<a[n]<<endl;
  
  
  return 0;
}