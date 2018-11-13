#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
#define size 1001
int main(int argc, char *argv[])
{
   char a[size];
       cin>>a;
   int n,i;
   int b[size],j;
       j=0;
       n=strlen(a);
       for(i=0; i<n; i++)
           {
              if(a[i]=='f')   { b[j]=i; j++; }
           }
   if(j==1)  cout<<b[0]<<endl;
   if(j>=2)
      {
         cout<<b[0]<<" ";
         cout<<b[j-1]<<endl;
      }

   
   return EXIT_SUCCESS;
}