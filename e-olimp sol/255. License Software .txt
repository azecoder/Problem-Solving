#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
  int n,m,i,cem=0;
  unsigned long long b[12];
  char a[11];

  gets(a);
  n=strlen(a);

  for(i=0; i<n; i++)
    cem=cem+(int)a[i]-48;


  if(cem<10)
    cout<<cem<<endl;
  else
    {m:
       b[0]=cem%10;
       b[1]=cem%100/10;
       b[2]=cem%1000/100;
       b[3]=cem%10000/1000;
       b[4]=cem%100000/10000;
       b[5]=cem%1000000/100000;
       b[6]=cem%10000000/1000000;
       b[7]=cem%100000000/10000000;
       b[8]=cem%1000000000/100000000;
       b[9]=cem/1000000000;

       cem=0;
       for(i=0; i<10; i++)
         cem=cem+b[i];

       if(cem<10)
         cout<<cem<<endl;
       else goto m;
    }


  return EXIT_SUCCESS;
}