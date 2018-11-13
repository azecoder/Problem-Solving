#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define size 10001
#define ll long long


int main(int argc, char *argv[])
{
  ll a[size],c[size],d[size],e[size],f[size],i,j=1,x,say1=0,say2=0,say3=0,say4=0;
  char b[100];

  while(scanf("%lld",&a[j++])!=EOF);

  j--;

  if(j==1)
  {
      for(i=1; i<=6; i++)    printf("[]\n");
      return 0;
  }


  printf("[");
  for(i=1; i<j-1; i++)   printf("%lld, ",a[i]*a[i]);
  printf("%lld]\n",a[j-1]*a[j-1]);
  

  printf("[");
  for(i=1; i<j-1; i++)   printf("%lld, ",a[i]%11);
  printf("%lld]\n",a[j-1]%11);
  

  for(i=1; i<j; i++)
     if(a[i]%2==0)
     {
         say1++;
         d[say1]=i;
     }

  if(say1==0)    printf("[]\n");
  else
  {
      printf("[");
      for(i=1; i<say1; i++)    printf("%lld, ",a[d[i]]);
      printf("%lld]\n",a[d[say1]]);
  }

  for(i=1; i<j; i++)
  {
      itoa(a[i],b,10);
      if(strlen(b)%2==1)
      {
          say2++;
          c[say2]=i;
      }
      else
      {
          say3++;
          e[say3]=i;
      }
  }

  if(say2==0)    printf("[]\n");
  
  else
  {
      printf("[");
      for(i=1; i<say2; i++)    printf("%lld, ",a[c[i]]);
      printf("%lld]\n",a[c[say2]]);
  }

  if(say3==0)    printf("[]\n");
  else
  {
      printf("[");
      for(i=1; i<say3; i++)    printf("%lld%lld, ",a[e[i]],a[e[i]]);
      printf("%lld%lld]\n",a[e[say3]],a[e[say3]]);
  }

  for(i=0; i<j-1; i++)
     if(i%3==0)   continue;
     else
     {
        say4++;
        f[say4]=i+1;
     }

  if(say4==0)    printf("[]\n");
  else
  {
      printf("[");
      for(i=1; i<say4; i++)    printf("%lld, ",a[f[i]]);
      printf("%lld]\n",a[f[say4]]);
  }

  return EXIT_SUCCESS;
}