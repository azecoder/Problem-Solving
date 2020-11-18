#include <stdio.h>
#include <stdlib.h>

int n,k,a=0,b=0,c=0,d=0,e=0,f=0;

int main(int argc, char *argv[])
{
scanf("%d",&n);

if(n%10) printf("-1\n");
else {
if(n>=500)
{
a=n/500;
n=n%500;
}
if(n>=200)
{
b=n/200;
n=n%200;
}

 if(n>=100)
{
c=n/100;
n=n%100;
}

 if(n>=50)
{
d=n/50;
n=n%50;
}

 if(n>=20)
{
e=n/20;
n=n%20;
}

 if(n>=10)
{
f=n/10;
n=n%10;
}
k=a+b+c+d+e+f;
printf("%d\n",k);
}
     
 return 0;
}