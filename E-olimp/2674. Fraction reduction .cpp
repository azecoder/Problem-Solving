#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long a,b,c,x,y,suret,mexrec;
  scanf("%lld%lld",&a,&b);
 
  x=a; y=b;
  while(y!=0)
  {
     x%=y; c=x; x=y; y=c;
  }
 
  suret=a/x;
  mexrec=b/x;
  
  if(a>0 && b<0)
     printf("%lld %lld\n",-suret,-mexrec);
  else if(a<0 && b>0 && abs(a)!=abs(b))
     printf("%lld %lld\n",-suret,-mexrec);
  else
     printf("%lld %lld\n",suret,mexrec);

  
  return EXIT_SUCCESS;
}