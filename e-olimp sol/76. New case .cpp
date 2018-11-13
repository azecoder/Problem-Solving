#include <stdio.h>
#include <stdlib.h>

int x, y, a, b, c, boyuk, orta, kicik, hundurluk, en;
int main(int argc, char *argv[])
{
scanf("%d%d%d%d%d",&x,&y,&a,&b,&c);
/*       shkafin olculeri       */
  if(a>=b && a>=c)
    {
      boyuk=a;
      if(b>c) {  orta=b;   kicik=c;  }
      else    {  orta=c;   kicik=b;  }
    }

  else if(b>=a && b>=c)
    {
      boyuk=b;
      if(a>c) {  orta=a;   kicik=c;  }
      else    {  orta=c;   kicik=a;  }
    }
  else if(c>=a && c>=b)
    {
      boyuk=c;
      if(b>a) {  orta=b;   kicik=a;  }
      else    {  orta=a;   kicik=b;  }
    }
/*      qapinin olculeri     */
  if(x>y) {  hundurluk=x;   en=y;  }
  else    {  hundurluk=y;   en=x;  }
/*      hesablama      */
 if(hundurluk > orta  &&  en > kicik )
     printf("1\n");
 else
     printf("0\n");


return 0;
}