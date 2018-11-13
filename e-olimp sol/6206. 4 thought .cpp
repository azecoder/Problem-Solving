#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long i,n,x;
  scanf("%ld",&n);
  for(i=1; i<=n; i++)
  {
      scanf("%ld",&x);

      if(x==-60)
      printf("4 - 4 * 4 * 4 = -60\n");
      else if(x==-16)
      printf("4 - 4 - 4 * 4 = -16\n");
      else if(x==-15)
      printf("4 / 4 - 4 * 4 = -15\n");
      else if(x==-8)
      printf("4 - 4 - 4 - 4 = -8\n");
      else if(x==-7)
      printf("4 / 4 - 4 - 4 = -7\n");
      else if(x==-4)
      printf("4 / 4 / 4 - 4 = -4\n");
      else if(x==-1)
      printf("4 - 4 / 4 - 4 = -1\n");
      else if(x==0)
      printf("4 * 4 - 4 * 4 = 0\n");
      else if(x==1)
      printf("4 * 4 / 4 / 4 = 1\n");
      else if(x==2)
      printf("4 / 4 + 4 / 4 = 2\n");
      else if(x==4)
      printf("4 + 4 / 4 / 4 = 4\n");
      else if(x==7)
      printf("4 + 4 - 4 / 4 = 7\n");
      else if(x==8)
      printf("4 + 4 + 4 - 4 = 8\n");
      else if(x==9)
      printf("4 + 4 + 4 / 4 = 9\n");
      else if(x==15)
      printf("4 * 4 - 4 / 4 = 15\n");
      else if(x==16)
      printf("4 + 4 + 4 + 4 = 16\n");
      else if(x==17)
      printf("4 / 4 + 4 * 4 = 17\n");
      else if(x==24)
      printf("4 + 4 + 4 * 4 = 24\n");
      else if(x==32)
      printf("4 * 4 + 4 * 4 = 32\n");
      else if(x==60)
      printf("4 * 4 * 4 - 4 = 60\n");
      else if(x==68)
      printf("4 + 4 * 4 * 4 = 68\n");
      else if(x==256)
      printf("4 * 4 * 4 * 4 = 256\n");
      else
      printf("no solution\n");
  }


  return EXIT_SUCCESS;
}