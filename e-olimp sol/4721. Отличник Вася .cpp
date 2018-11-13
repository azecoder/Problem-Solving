#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
#define size 1001
int main(int argc, char *argv[])
{
   char a[size];
       cin>>a;
   int n,i,k;
       k=0;
       n=strlen(a);
       for(i=0; i<n; i++)
           {
              if(a[i]=='5')
                 k++;
           }
   cout<<k<<endl;

   
   return EXIT_SUCCESS;
}