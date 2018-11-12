#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[53];
int i,n,herfsay=0,sozsay=0;
double netice;

int main(int argc, char *argv[])
{
   gets(a);
   n=strlen(a);

   if(n==0)
   {
       printf("0.000000000\n");
       return 0;
   }

   for(i=0; i<n; i++)
   {
       if(isalpha(a[i]))
       herfsay++;
       if(isalpha(a[i]) && !isalpha(a[i+1]))
       sozsay++;
   }

   if(herfsay==0 || sozsay==0)
   {
       printf("0.000000000\n");
       return 0;
   }

   netice=(double)herfsay/(double)sozsay;



   printf("%.9lf\n",netice);
   
   return 0;
}