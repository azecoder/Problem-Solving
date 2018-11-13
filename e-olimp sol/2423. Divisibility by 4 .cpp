#include <stdio.h>
#include <stdlib.h>
unsigned long long m,n,i,k,j=0;

int main(int argc, char *argv[])
{
  scanf("%llu%llu",&m,&n);
  for(i=m+1;i<=n+1;i++)
  {
      if((i%4==0&&i!=4&&i!=8)||i==2||i==6)       j++;
      if(j==1)       break;
  }

  if(j==0)   k=0;
  else   k=(n+1-i)/4+1;

  printf("%llu\n",k);

 
  return 0;
}