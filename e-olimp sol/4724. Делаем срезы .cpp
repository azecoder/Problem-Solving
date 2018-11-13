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
       n=strlen(a);
/*1*/   cout<<a[2]<<endl;
/*2*/   cout<<a[n-2]<<endl;
/*3*/   for(i=0; i<5; i++)      cout<<a[i];  cout<<endl;
/*4*/   for(i=0; i<n-2; i++)    cout<<a[i];  cout<<endl;
/*5*/   for(i=0; i<n; i+=2)     cout<<a[i];  cout<<endl;
/*6*/   for(i=1; i<n; i+=2)     cout<<a[i];  cout<<endl;
/*7*/   for(i=n-1; i>=0; i--)   cout<<a[i];  cout<<endl;
/*8*/   for(i=n-1; i>=0; i-=2)  cout<<a[i];  cout<<endl;
/*9*/   cout<<n<<endl;

   
   return EXIT_SUCCESS;
}