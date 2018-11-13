#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <math.h>
#define MAX 50000
long a[50000];
using namespace std;

void primes() {
   int i,j;
   for(i=0;i<MAX;i++) a[i] = 1;
   for(i=2;i<=(int)sqrt(MAX);i++)
      if (a[i])
         for(j=i;j*i<MAX;j++) a[i*j] = 0;
}

int main(int argc, char *argv[])
{
   long n,s,m,l,o,i,p;
   cin>>n;
   
   primes();
   a[0]=0;
   a[1]=0;
   for( i=1;i<=n;i++) {
      s=1;
      o=0;
      scanf("%ld",&m);
      while(m>1){
      p=sqrt(m)+1;
          for(int j=0;j<=p;j++){l=0;
              if(a[j])
                  while(m%j==0 && m>1) {
                      m/=j;
                      l++;
                      o=1;
                  }

                  if(l)s*=(2*l+1);
          }
          l=0;
          if(m>1){m/=m;l=1;}
           if(l)s*=(2*l+1);
      }
      printf("Scenario #%ld:\n",i);
      printf("%ld\n",(s+1)/2);

      printf("\n");
  }
 
  return 0;
}