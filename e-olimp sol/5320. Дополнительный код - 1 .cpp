#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int a,n,m,say;
char b[10000],x[100001];

int main()
{
  cin>>a>>n;
  itoa(a,b,2);
  m=strlen(b);

  if(m<n){
      for(int i=1; i<=n-m; i++){
          cout<<'0';
      }

      cout<<b<<endl;
  }

  if(m>n){
      for(int i=m-1; i>=0; i--){
          x[say]=b[i];
          say++;

          if(say==n){
              break;
          }
      }

      for(int i=say-1; i>=0; i--){
          cout<<x[i];
      }

      cout<<endl;
  }

  return 0;
} 