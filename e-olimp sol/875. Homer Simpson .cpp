#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   long a,b,n,mn,mx,m,l,s,q,sum,m1,l1=0;
   cin>>a>>b>>n;
   m=n;
   m1=n;
   mn=min(a,b);
   mx=max(a,b);
   if(n%mn==0)cout<<n/mn<<endl;
   else{
       l=0;
       l1=0;
       s=0;
       q=n%mn;sum=n/mn;
   while(n%mn && n>mn){
       n-=mx;
       l++;
   }
   if(q>m1%mx){ q=m1%mx;sum=m1/mx;}
   if(n>mn){s+=l+n/mn;cout<<s<<endl;}
       else{
           cout<<sum<<" "<<q<<endl;
       }
   }

 
   return EXIT_SUCCESS;
}