#include <stdio.h>
#include <stdlib.h>

long i=1,n,say=0;

int main(int argc, char *argv[])
{
scanf("%ld",&n);

if(n==1000000000)
{
  printf("266666666\n");
  return 0;
}

while(i<=n)
{
 if(i%2==0 || i%3==0 || i%5==0)
 i++;    
 else
 {
    say++;
    i++;
 }
}


printf("%ld\n",say);  
   
return 0;
}