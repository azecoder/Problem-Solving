#include <cstdlib>
#include <iostream>
#include <math.h>

long n, m, l;
long q, i,a[100001], j, z, p, s;

using namespace std;

int main(int argc, char *argv[])
{
   cin>>n;

m=n;
l=n;
while(m!=0)
  {
    a[i]=m%2;  i++;
    m=m/2;
  }
--i;

for(z=0;z<=i;z++)
   {
      s=0;

    q=a[0];
    for(j=0;j<i;j++)a[j]=a[j+1];
        a[j]=q;

    for(p=i;p>=0;p--)
        s=a[p]*pow(2,(double)p)+s;

    if(l<s)  l=s;
   }

cout<<l<<endl;


  return EXIT_SUCCESS;
}