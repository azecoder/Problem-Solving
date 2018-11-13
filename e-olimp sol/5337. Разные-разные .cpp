#include <iostream>
#include <algorithm>

using namespace std;

long long a[1000001],i,n,say,say1;

int main()
{
  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>a[i];

      if(a[i]==0)
          say1++;
  }

  sort(a+1,a+n+1);

  for(i=1; i<=n; i++)
      if(a[i]!=a[i+1])
          say++;

  if(say1==n)
      say++;

  cout<<say<<endl;







  return 0;
}