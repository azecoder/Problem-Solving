#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

bool cmp(int X, int Y)
{
  return X<Y;
}

int main(int argc, char *argv[])
{
  short say=1,i,n;
  char a[1002];
  scanf("%s",a);
  n=strlen(a);

  sort(a,a+n,cmp);

  for(i=0; i<strlen(a)-1; i++)
  if(a[i]!=a[i+1])
  say++;

  printf("%d\n",say);

  return EXIT_SUCCESS;
}