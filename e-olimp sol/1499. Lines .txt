#include <cstdlib>
#include <iostream>
#include <stdlib.h>

int compare(void const *a,void const *b);
using namespace std;

int main(int argc, char *argv[])
{
  char a[10001],b[10001];
  int i,h1,k,l,c,y,h2;
  gets(a);
  gets(b);
  h1=strlen(a);
  h2=strlen(b);

  for(i=0;i<h1;i++)
  {
     if(a[0]==b[i])
     {
        c=i;k=1;y=1;l=i+1;
        while(l!=c){

        if(l==h1)  l=0;
        k++;
        if(k>=h1)  break;
        if(a[k-1]!=b[l++]) {y=0;;break;}
        else  y=1;
        }
     }
     else  continue;
     if(y==1)
     {
         cout<<i<<"\n";break;
     }
  }
  if(y==0)  cout<<"-1\n";

  return EXIT_SUCCESS;
} 