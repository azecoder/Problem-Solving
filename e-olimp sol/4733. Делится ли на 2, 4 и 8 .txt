#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>

char a[1001];
int n,i;
int c,d,k;
using namespace std;

int main(int argc, char *argv[])
{
   cin.get(a,1001);

   n=strlen(a);

   for(i=0; i<n; i++)
       a[i]-=48;


       if(a[n-1]%2==0)         cout<<"Yes"<<endl;
       else                    cout<<"No"<<endl;

       c=a[n-2]*10+a[n-1];
       if(c%4==0)              cout<<"Yes"<<endl;
       else                    cout<<"No"<<endl;

       d= a[n-3]*100+a[n-2]*10+a[n-1];
       if(d%8==0)              cout<<"Yes"<<endl;
       else                    cout<<"No"<<endl;


//    cout<<endl;


   
   return EXIT_SUCCESS;
}