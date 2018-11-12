#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, c[1000000],k,l,n,s;
char a[1000000];

int main(int argc, char *argv[])
{

scanf("%s", a);

n=strlen(a);
k=0;

for(i=0; i<n; i++)
{
switch (a[i])
{
case 'I': c[k]=1; k++; break;
case 'V': c[k]=5; k++; break;
case 'X': c[k]=10; k++; break;
case 'L': c[k]=50; k++; break;
case 'C': c[k]=100; k++; break;
case 'D': c[k]=500; k++; break;
case 'M': c[k]=1000; k++; break;
case '+': c[k]=0; k++; break;
}
}

s=0;
for(k=0; k<n; k++)
{
if(c[k]<c[k+1])
s=s-c[k];

else
s=s+c[k];
}




k=s/1000;
l=k;
if(k!=0)
for(k=1; k<=l; k++)
printf("M");




k=s%1000/100;
if(k==1)
printf("C");
else if(k==2)
printf("CC");
else if(k==3)
printf("CCC");
else if(k==4)
printf("CD");
else if(k==5)
printf("D");
else if(k==6)
printf("DC");
else if(k==7)
printf("DCC");
else if(k==8)
printf("DCCC");
else if(k==9)
printf("CM");


k=s%100/10;
if(k==1)
printf("X");
else if(k==2)
printf("XX");
else if(k==3)
printf("XXX");
else if(k==4)
printf("XL");
else if(k==5)
printf("L");
else if(k==6)
printf("LX");
else if(k==7)
printf("LXX");
else if(k==8)
printf("LXXX");
else if(k==9)
printf("XC");



k=s%10;
if(k==1)
printf("I");
else if(k==2)
printf("II");
else if(k==3)
printf("III");
else if(k==4)
printf("IV");
else if(k==5)
printf("V");
else if(k==6)
printf("VI");
else if(k==7)
printf("VII");
else if(k==8)
printf("VIII");
else if(k==9)
printf("IX");

printf("\n");


return 0;
}