#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,k,f,s,i,small,t,j,big;
unsigned long long l,p;

int main(int argc, char *argv[])
{
k=1; t=1;
while(1)
{
scanf("%d%d",&a,&b);

if(a==0 || b==0)
break;

else if(a==1 || b==1)
p=0;

else if(a==2 && b==2)
p=1;

else if(a==2 && b>2)
{
f=1;
if(a<(b-a))s=a; else s=b-a;
for(i=1; i<=s; i++)
f=f*(b-i+1)/i;
p=f;
}

else if(b==2 && a>2)
{
f=1;
if(b<(a-b))s=b; else s=a-b;
for(i=1; i<=s; i++)
f=f*(a-i+1)/i;
p=f;
}

// else if((a==3 && b>=3) || (b==3 && a>=3))
// {
//   p=a*b;
//}

else
{
   p=0;
 if(a>b) {small=b; big=a;}  else {small=a; big=b;}
 if(big%2)
   l=big*((big-1)/2);
 else
   l=(big/2)*(big-1);
 for(j=1; j<=small-1; j++)
   p=p+j*l;
}

printf("Case %d: ",k);
printf("%llu\n",p);
k++; t++;
}


return 0;
}