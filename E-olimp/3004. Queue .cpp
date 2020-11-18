#include <cstdlib>
#include <iostream>
#include <stack>
#include <math.h>
#include <stdio.h>
#include <set>

using namespace std;

#define LL long long

LL n,k,a[100001],x[10001],sum,mn,k1,mx=0,inf,mn1;
int main(int argc, char *argv[])
{

  multiset <LL> mts;


  cin>>n>>k;
  for(int i=0;i<n;i++)
      scanf("%lld",&a[i]);

  for(int i=0;i<k;i++)mts.insert(0);
  for(int i=0;i<n;i++){


      mts.insert(*mts.begin()+a[i]);
      mts.erase(mts.begin());


  }


  cout<<*(--mts.end())<<endl;

  return 0;
} 