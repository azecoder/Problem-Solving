#include <cstdlib>
#include <iostream>
#include <string.h>
char a[10001], b[10001];
int  n,m,t,q,i,j;
using namespace std;

int main(int argc, char *argv[])
{
  scanf("%s%s",a,b);
 if(strcmp(a,b)==0)
     printf("0\n");
 else
 { n=strlen(a);
   m=strlen(b);
  q=0;
  i=n-1;
  j=m-1;
  while(j>=0)
  {
  t=(int)a[i]-(int)b[j]+q;
  if(t<0)
  {
      a[i]=(char)(t+48+10);
      q=-1;

      }
      else
      {
          a[i]=(char)(t+48);
          q=0;

      }
          i--;
          j--;
  }

          if(q==-1)
          while(i>=0)
          {
              t=(int)a[i]-48+q;

          if(t<0)
          {
              a[i]=(char)(t+58);
              q=-1;
              }
              else
              {
                  a[i]=(char)(t+48);
                  q=0;
              }
                  i--;
          }

          for(i=0;i<n;i++)
             if(a[i]!='0')
                break;

          for(j=i;j<n;j++)
          printf("%c",a[j]);



  printf("\n");
}
  return EXIT_SUCCESS;
}