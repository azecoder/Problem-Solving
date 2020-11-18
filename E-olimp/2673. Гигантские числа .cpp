#include <cstdlib>
#include <iostream>
#include <set>
#include <math.h>


using namespace std;
long long a[1000][1000],n,x,s,m,k=0,a1,b,y,say,g=0;

int main(int argc, char *argv[])
{

   cin>>n>>k;
   m=1;
   s=1;
   y=0;
   for(int i=0;i<k;i++)    m*=10;
   for(int i=0;i<n;i++){
       s*=n;
       if(s>m/n){y=1;break;}
  }
  if(y==0)
     if(n!=0)
         cout<<s<<endl;else cout<<0<<endl;
     else{
         s=1;
         g=n%m;
         x=n;
         for(int i=0;i<n/2;i++){
            s=(s*g)%m;
         }
         s=((s%m)*(s%m))%m;
         if(n%2!=0)s=(s*g)%m;
         b=s;
         while(b>=1){
            b/=10;
            say++;
         }
         if(s==0)say=1;
         if(say==k)   cout<<s<<endl;
         else{
             for(int i=0;i<k-say;i++)    cout<<"0";
             cout<<s<<endl;
         }

     }

   return 0;
} 