#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string a[10001],b[10001];
double ortaqiymet[10001];
long long cem,i,n,m,j,k,eded;

int main(int argc, char *argv[])
{
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  {
      cin>>a[i];
      cin>>b[i];

      cem=0;

      scanf("%lld",&m);
      for(j=1; j<=m; j++)
      {
          scanf("%lld",&eded);
          cem=cem+eded;
      }

      ortaqiymet[i]=(double)(cem/m);
  }

  scanf("%lld",&k);

  for(i=1; i<=n; i++)
  {
      if(ortaqiymet[i]>=double(k))
      cout<<a[i]<<" "<<b[i]<<endl;
  }


  return EXIT_SUCCESS;
}