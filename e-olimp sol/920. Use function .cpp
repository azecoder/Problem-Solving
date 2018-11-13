#include <stdio.h>
#include <stdlib.h>

float x, y, z, s, max1, max2, min1, min;
int main(int argc, char *argv[])
{
  scanf("%f%f%f",&x,&y,&z);
    if(x>=y)
      max1=x;
    else if(x<y)
      max1=y;

    if(y>=z)
      max2=y;
    else if(y<z)
      max2=z;

    s=x+y+z;

     if(max1<=max2)
       min1=max1;
     else if(max1>max2)
       min1=max2;

     if(min1<=s)
       min=min1;
     else if(min1>s)
       min=s;

    printf("%.2f\n", min);
 
 return 0;
}