#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long i,k,g,l,f,e;
double x1,x2,x3,x4,v1,v2,v3,v4,a,b,c,d,dble_e,dble_f;
int main()
{

   scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&v1,&x2,&v2,&x3,&v3,&x4,&v4);

 a=sqrt((x1-x2)*(x1-x2)+(v1-v2)*(v1-v2));
 b=sqrt((x3-x2)*(x3-x2)+(v3-v2)*(v3-v2));
 e=((x3-x1)*(x3-x1)+(v3-v1)*(v3-v1));
 c=sqrt((x3-x4)*(x3-x4)+(v3-v4)*(v3-v4));
 d=sqrt((x1-x4)*(x1-x4)+(v1-v4)*(v1-v4));
 f=((x4-x2)*(x4-x2)+(v4-v2)*(v4-v2));

i=(a*a+b*b);
l=(b*b+c*c);
g=(c*c+d*d);
k=(a*a+d*d);

if(e==i && f==l && e==g && f==k)
        printf("4\n");

else 
if(e==i && f==l||e==i && e==g||e==i && f==k||f==l && e==g||f==l && f==k||e==g&&f==k)
        printf("2\n");

else if(e==i||f==l||f==k||e==g)
        printf("1\n");

else     printf("0\n");


return 0;
}