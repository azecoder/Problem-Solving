#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define MAX 1000001
using namespace std;

int a,b,s,a1[1100000],b1[1100000],l;
void gen_primes()
{
  int i,j;
  for(i=0;i<MAX;i++) a1[i] = 1;
  for(i=2;i<=(int)sqrt(MAX);i++)
     if (a1[i])   for(j=i;j*i<MAX;j++) a1[i*j] = 0;
}

int main(int argc, char *argv[])
{
  gen_primes();
  a1[0]=0, a1[1]=0;
  scanf("%d%d",&a,&b);
  for(int i=1;i<1000001;i++)
      a1[i]+=a1[i-1];
  while(1)
  {
     if(a==-1 && b==-1)break;
     if(a<0)a=0;
     if(b<0)b=0;
     b1[l++]=a1[b]-a1[a-1];
     scanf("%d%d",&a,&b);
  }
  for(int i=0;i<l;i++)
     printf("%d\n",b1[i]);

 
 return 0;
}