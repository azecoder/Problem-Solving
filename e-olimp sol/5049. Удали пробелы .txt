#include <cstdlib>
#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{
  char a[1001];
  long i,j,n,say=0;
  gets(a);
  n=strlen(a);

  if(n==1)
  {
      printf("%c\n",a[0]);
      return 0;
  }

  for(i=0; i<n; i++)
  if(a[i]==' ')
  say++;
  else
  break;

  if(say==n)
  {
      printf("\n");
      return 0;
  }

  if(say!=0)
  printf("%c",a[say-1]);

  for(i=say; i<n; i++)
  if((isalpha(a[i])) || (!isalpha(a[i]) && isalpha(a[i-1])))
  printf("%c",a[i]);
  printf("\n");


  return EXIT_SUCCESS;
}