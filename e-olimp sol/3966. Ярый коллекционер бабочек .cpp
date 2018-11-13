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
#include <iostream>
#include <string.h>

using namespace std;

#define size 100001

int a[size], b[size];

// * * * * * * * - B I N A R Y  *  S E A R C H - * * * * * * * * *
int binary_search(int begin, int end, int x)
{
   int mid;
   bool flag = false;

    while(begin <= end)
   {    
       mid = (begin + end) / 2;
      
       if(x == a[mid])
       {
           cout << "YES" << endl; 
           flag = true; 
           break;
       }
       else if(x < a[mid])      end = mid - 1;
       else                     begin = mid + 1;
   }
  if(flag == false)    cout << "NO" << endl;
}
// * * * * * * * * * * - M A I N - * * * * * * * * * * * * * *
int main(int argc, char *argv[])
{
   int n;
       cin >> n;
       for(int i = 0; i < n; i++)
           cin >> a[i];
   int m;
       cin >> m;
       for(int i = 0; i < m; i++)
       {
           cin >> b[i];
           int k = 0;
           binary_search(0, n, b[i]);
       }
   
   return EXIT_SUCCESS;
}








- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 


#include <iostream>

using namespace std;

long a[100001],b[100001],i,n,m;

bool bsearchh(long l, long r, long x)
{
  long mid=(l+r)/2;

  if(a[mid]==x)
      return 1;
  else if(l==r)
      return 0;
  else if(a[mid]<x)
      return bsearchh(mid+1,r,x);
  else if(a[mid]>x)
      return bsearchh(l,mid,x);
}

int main()
{
  cin>>n;
  for(i=1; i<=n; i++)
      cin>>a[i];
  cin>>m;

  for(i=1; i<=m; i++)
      cin>>b[i];
   
   for(i=1; i<=m; i++)   
      if(bsearchh(1,n,b[i])==1)
          cout<<"YES"<<endl;
      else
          cout<<"NO"<<endl;
          
  return 0;
}