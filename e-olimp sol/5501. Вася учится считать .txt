#include <cstdlib>
#include <iostream>

using namespace std;

char a[100000];
int say_reqem=0,f1=0,setir=0,ans,setir_max,ans_setir,f=0,has=1,maxx=-2000000010,sum=0,i=0,k,j;

int main(int argc, char *argv[])
{
  while(gets(a))
  {
      setir++;
      sum=0;
      say_reqem=0;
      i=0;
      has=1;
      f=0;

      while(i<strlen(a))
      {
          sum=0;
          say_reqem=0;
          k=1;
          has=1;
          f=0;

          if(a[i]==' ' || a[i]=='\t')
          i++;
          else
          {
              if(a[i]=='-' )
              {
                  f=1;
                  i++;
              }

              while((a[i]!=' ' && a[i]!='\t') && i<=strlen(a)-1)
              {
                  say_reqem++;
                  i++;
              }

              while(say_reqem>=1)
              {
                  sum=sum+has*(a[i-k]-48);
                  has=has*10;
                  say_reqem--;
                  k++;
              }

              if(f==1)
              sum=-sum;

              if(maxx<sum)
              {
                  maxx=sum;
                  ans_setir=setir;
              }
          }
      }
  }

  if(ans_setir>0)
  printf("%d %d\n",maxx,ans_setir);


  return EXIT_SUCCESS;
}