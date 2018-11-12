#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 256


char a[size],b[size],i,j,k,l,m,n;
int main(int argc, char *argv[])
{gets(a);
gets(b);
n=strlen(a);
l=strlen(b);
for(j=0;j<n;j++)
{  for(i=0;i<n-1;i++)
    if(a[i]>a[i+1])
    {   m=a[i];
        a[i]=a[i+1];
        a[i+1]=m;
    }
}
for(j=0;j<l;j++)
{
    for(i=0;i<l-1;i++)
    if(b[i]>b[i+1])
    {
        m=b[i];
        b[i]=b[i+1];
        b[i+1]=m;
    }
}if(n==l)
 for(j=0;j<n;j++)
 if(a[j]==b[j])
   k++;else{
           k=0;
           break;}
           if(k==0)
           cout<<"NO"<<endl;else
           cout<<"YES"<<endl;


    return EXIT_SUCCESS;
}