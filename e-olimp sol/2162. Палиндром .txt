#include <cstdlib>
#include <iostream>
#include <string.h>

char a[256],b[256];
int j,n,i,m,k,l;

using namespace std;

int main(int argc, char *argv[])
{
  gets(a);

n=strlen(a);

j=1;
for(i=0; i<n; i++)
   if(a[i]!=' ')
     {
       b[j]=a[i];
       j++;
     }

k=j;
for(j=1; j<=k/2; j++)
   {
    if(b[0+l]!=b[k-l])
      m++;
    l++;
   }

if(m==0)
   cout<<"YES"<<endl;
else
   cout<<"NO"<<endl;



   
   return EXIT_SUCCESS;
}