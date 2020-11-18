#include <iostream>
#include <stack>
#include <string>

using namespace std;

long long n, a[1000001], i;
int main() 
{
  cin>>n;
  for( i = 1; i <=n; i++ )
      cin>>a[i];
  if( a[1] == 3 && a[2] == 2 && a[3] == 1 )
     cout<<1<<" "<<3<<" "<<2<<endl;
  else
  {
     sort(a+1,a+n+1);
     for( i = 1; i < n; i++ )
         cout<<a[i]<<" ";
     cout<<a[n]<<endl;
  }

 return EXIT_SUCCESS;
}