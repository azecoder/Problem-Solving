#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
#define size 256
int main(int argc, char *argv[])
{
   char a[size];
      cin.get(a,size);
   int n,i,k;
      k=0;
      n=strlen(a);
      for(i=0; i<n; i++)
         {
            if(a[i]=='f') k++;
            if(k==2) { cout<<i; break; }
         }
     if(k==0) cout<<"-2";
     if(k==1) cout<<"-1";
     cout<<endl;

   
   return EXIT_SUCCESS;
}