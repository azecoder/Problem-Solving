#include <cstdlib>
#include <iostream>
#include<string.h>

using namespace std;

  long long gcd(long long a, long long b){
      return b?gcd(b,a%b):a;
  }
int main(int argc, char *argv[])
{
  long long n,m,h,k,x,y;
  while(cin>>n>>m){

   if(n!=0 && m!=0){
          k=0;

   h=gcd(n,m);
   n=n/h;
   m=m/h;
      if((n+m)%2==0){
          h=n+m;
          while(h%2==0){
              h/=2;
              k++;
          }
          if(h==1) cout<<k-gcd(n,m)+1<<endl;
          else     cout<<-1<<endl;
      }
      else     cout<<-1<<endl;
   }
   else cout<<0<<endl;
}
 
   return EXIT_SUCCESS;
} 