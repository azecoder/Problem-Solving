#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string str;
int n,i,k;
int main(int argc, char *argv[])
{
   cin>>n;

 while(n!=0)
      {
        for(i=1;i<=n;i++)
           {
              str.assign(2*i-1,'*');
              cout.width(n+i-1);
              cout<<str<<"\n";
           }
        k=1;
        for(i=n-1;i>=1;i--)
           {
              str.assign(2*i-1,'*');
              cout.width(2*i-1+k);
              cout<<str<<"\n";
              k=k+1;
           }

       cin>>n;

   if(n==0)
      break;

   cout<<"\n";
      }



   return EXIT_SUCCESS;
}