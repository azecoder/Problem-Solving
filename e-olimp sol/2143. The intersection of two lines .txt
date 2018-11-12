#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double A1,B1,C1,A2,B2,C2,d,a,b;
  scanf("%lf%lf%lf%lf%lf%lf",&A1,&B1,&C1,&A2,&B2,&C2);
  
  C1 = -C1, C2 = -C2;
  
  d = A1*B2-A2*B1, a = C1*B2-C2*B1, b = A1*C2-A2*C1;
  
  if(d==0)   printf("0.00 0.00\n");
  else if(a==0 && b!=0)   printf("0.00 %.2lf\n",b/d);
  else if(b==0 && a!=0)   printf("%.2lf 0.00\n",a/d);
  else if(a==0 && b==0)   printf("0.00 0.00\n");
  else                    printf("%.2lf %.2lf\n",a/d,b/d);


  return 0;
}