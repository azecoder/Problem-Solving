#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long i,j,n,m,a[40],flag,say;
char b[100];

int main()
{
  scanf("%ld",&n);

  for(i=2; i<=36; i++)
  {
      flag=0;
      itoa(n,b,i);
      m=strlen(b);

      for(j=0; j<m/2; j++)
          if(b[j]!=b[m-j-1])
          {
              flag=1;
              break;
          }

      if(flag==0)
      {
          say++;
          a[say]=i;
      }
  }

  if(say==0)         printf("none\n");
  else if(say==1)    printf("unique\n%ld\n",a[1]);
  else
  {
      printf("multiple\n");
      for(i=1; i<say; i++)
          printf("%ld ",a[i]);
      printf("%ld\n",a[say]);
  }

  return 0;
}