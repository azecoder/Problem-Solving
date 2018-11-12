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

#define MAX 2000001
#define ll long long

ll a[MAX],i=1,n,x,max1,max2;

int main(int argc, char *argv[])
{
 while(cin>>x)
 {
     a[i++]=x;
     
     if(x==0)    break;
 }
 
 n=i-2;
 
 max1=a[1];
 for(i=2; i<=n; i++)
   if(a[i]>max1)
     max1=a[i];
 
 for(i=1; i<=n; i++)
   if(a[i]==max1)
     a[i]=-100;
 
 max2=a[1];
 for(i=2; i<=n; i++)
   if(a[i]>max2)
     max2=a[i];
 
 cout<<max2<<endl;

   
   return EXIT_SUCCESS;
}