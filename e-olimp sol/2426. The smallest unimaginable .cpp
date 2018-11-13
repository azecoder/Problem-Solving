#include <cstdlib>
#include <iostream>

using namespace std;
unsigned long long n,a[10000],c,b,m;
int main(int argc, char *argv[])
{
 while(cin>>m)
     a[n++] = m;
     sort(a,a + n);
 if(a[0]!=1)cout<<1<<endl;
     else{
     b=a[0];
     for(long  i=1;i<n;i++)
         if(a[i]<=b+1)
             b=a[i]+b;
             else
             c=b+1;

         if(c)
 cout<<c<<endl;
 else
 cout<<b+1<<endl;
 }
  return 0;
} 