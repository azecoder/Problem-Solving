#include <stdio.h>
#define max 10000001
#include <math.h>
#include <stdlib.h>
long long  n,i,u,q,j,k,s=0,cnt=0,l,m[max];
int main(int argc, char *argv[])
{    m[1]=1;

 for(i=1;i<=max/2;i++){
 if(m[i])
{    for(j=i+i;j<max;j=j+i)
 m[j]=m[j]-m[i];
}}
scanf("%lld", &l);
for(u=0;u<l;u++){

s=0;  

scanf("%lld", &n);


for(i=1;i<=sqrt(n);i++)
s+=m[i]*(n/(i*i));
printf("%lld\n", s);}    
return 0;

} 