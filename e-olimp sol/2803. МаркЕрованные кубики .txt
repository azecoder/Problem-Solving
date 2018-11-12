#include <iostream.h>
#include <stdio.h>
#include <string.h>

char a[256];

int main(int argc, char *argv[])
{
  gets(a);

  int n=strlen(a);
  for(int i = 0; i < n; i ++)
      if(a[i] == 57)                     a[i]=48;
      else if(a[i] >= 48 && a[i] <= 56)  a[i]=a[i]+1;

  for(int i = 0; i < n; i ++)    cout << a[i];
  cout << endl;

  return 0;
}