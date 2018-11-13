#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

long length(long x,long y,long x1,long y1){
   return (x-x1)*(x-x1)+(y-y1)*(y-y1);
}

struct name{
   long x,y,t;
}f[1000];

int main(int argc, char *argv[])
{
   long a[10000],b[10000],c[1000];
   long n,d;
   cin>>n>>d;
   for(int i=0;i<n;i++)
       cin>>a[i]>>b[i]>>c[i];
       int k=0;
   for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
           if(c[i]!=c[j])
               if(d*d==length(a[i],b[i],a[j],b[j])){k=1;break;}

       if(k==0)
           cout<<"No\n";
           else
           cout<<"Yes\n";

   
   return 0;
}