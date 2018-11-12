#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{long c,l,j,k,max,n,i,a[100001];
scanf("%ld",&n);
for(i=0;i<n;i++)
{scanf("%lld",&a[i]);
}
max=0;
for(j=1;j<=9;j++)
{k=0;
  for(i=0;i<n;i++)
{if(a[i]==j)
{k++;
}
}
if(max<k)
{max=k;
l=j;
}}
c=0;
for(i=0;i<n;i++)
{if(a[i]!=l)
c++;
}
printf("%ld\n",c);


 
  return EXIT_SUCCESS;
}