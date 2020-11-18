#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int x,y,x1,Y1,x2,y2,x3,y3,x4,y4,a,b,s1,s2,s3,s4,s;
 scanf("%d%d%d%d%d%d",&x,&y,&x1,&Y1,&x2,&y2);
 a=abs(x1-x2);
 b=abs(Y1-y2);
 s=2*a*b;
 s1=abs(x*(y2-Y1)+x2*(Y1-y)+x2*(y-y2));
 s2=abs(x*(Y1-Y1)+x1*(Y1-y)+x2*(y-Y1));
 s3=abs(x*(Y1-y2)+x1*(y2-y)+x1*(y-Y1));
 s4=abs(x*(y2-y2)+x2*(y2-y)+x1*(y-y2));
 if(s==s1+s2+s3+s4)
     printf("1\n");
 else              
     printf("0\n");

return 0;
}