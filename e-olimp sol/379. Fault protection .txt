#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
   char a[101];
    long long n,m,i,j,c=0;
        gets(a);
    n=strlen(a);
   for(i=0;i<n;i++)    if(a[i]==49)    c++;

   if(c%2==0)
   {
        if(a[n-1]=='o')
        {
            for(i=0;i<n-1;i++)    cout<<a[i];
            cout<<"1"<<endl;
        }
        if(a[n-1]=='e')
        {
            for(i=0;i<n-1;i++)    cout<<a[i];
            cout<<"0"<<endl;
        }
   }
    else if(c%2==1)
   {
         if(a[n-1]=='o')
       {
            for(i=0;i<n-1;i++)  cout<<a[i];
            cout<<"0"<<endl;
       }
        if(a[n-1]=='e')
       {
            for(i=0;i<n-1;i++)    cout<<a[i];
            cout<<"1"<<endl;
       }
   }

    return EXIT_SUCCESS;
}