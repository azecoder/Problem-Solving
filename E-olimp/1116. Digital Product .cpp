#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
long n,a[1000000],l;
int main(int argc, char *argv[])
{
  while(scanf("%ld",&n)!=EOF){
      l=0;
      if(n && n!=1){
          for(int i=9;i>=2;i--)
              while(n%i==0){a[l++]=i;n/=i;
      }
      if(n<=1){
          for(int i=l-1;i>=1;i--)
              printf("%ld",a[i]);
          printf("%ld\n",a[0]);
      }
      else          printf("-1\n");
  }
  else if(!n)   printf("10\n");
  else          printf("1\n");
  }

  return EXIT_SUCCESS;
} 