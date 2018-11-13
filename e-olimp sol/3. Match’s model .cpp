#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

long a, n, s, x, q, r, k;

long alt(long n)
{
  return (8*1+(n-1)*2*5+(n*n-2*n+1)*3);
}

int main(int argc, char *argv[])
{
 while(cin>>a)
 {

 n=pow(a,(float)1/3);

 s=12+(n-1)*3*8+(n-1)*(n-1)*3*5+(n*n*n-3*n*n+3*n-1)*3;

 x=a-n*n*n;
 k=0;

 while(x)
 {

m:   if(x<=n*n)
     {
         q=sqrt(x); r=x-q*q;

         s+=alt(q);
         if(r<=2) s+=r*5;
         else s+=2*5+(r-2)*3;

         break;
     }

     else if(x>n*n && x<=2*n*n+n)
     {

         if(x<=2*n*n) {s+=alt(n); x-=n*n; goto m;}
         else
         {
              x-=2*n*n;
              s+=2*alt(n);

              if(x==1) {s+=5; x=0;}
              else if(x>1 && x<=n) {s+=5+(x-1)*3; x=0;}
         }

     }
     else
     {
          s+=2*alt(n)+5+(n-1)*3;

          x-=(2*n*n+n);

          n+=1;
          goto m;
      }
 }

 cout<<s<<endl;

}
   return EXIT_SUCCESS;
}