#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  unsigned long n,i,flag=0;
  scanf("%lu",&n);
 
  for(i=2; i<=sqrt(n); i++)
  if(n%i==0)
  {
      flag=1;
      break;
  }
 
  if(flag==1)  printf("False\n");
  else  printf("True\n");

  
return 0;
}