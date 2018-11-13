#include <cstdlib>
#include <iostream>
#include <string.h>
#include <ctype.h>

int k,i,l,n;
char a[251];

using namespace std;

int main(int argc, char *argv[])
{

  gets(a);

n=strlen(a);



for(i=1; i<n; i++)
   {
     if(!isalnum(a[i]) &&  a[i]!='-' && a[i]!='\'')
       if(isalnum(a[i-1]))
         k++;
   }

cout<<k<<endl;


   
   return EXIT_SUCCESS;
}