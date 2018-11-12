#include <iostream>
#include <stdio.h>

using namespace std;

char c,b,r;
int x,bx,rx;

int main()
{
  scanf("%c%d",&c,&x);

  if (c == 'h')    b = r = 'g';
  else             b = r = c + 1;
  if (x == 8)      bx = x - 1 , rx = x;
  else             bx = x + 1 , rx = x;

  printf("%c%d\n%c%d\n",r,rx,b,bx);

  return 0;
} 