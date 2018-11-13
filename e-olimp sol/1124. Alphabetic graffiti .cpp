#include <cstdlib>
#include <iostream>

int n,i,j,k,l;

using namespace std;

int main(int argc, char *argv[])
{
   cin>>n;


for(i=0; i<n; i++)
   {
     cout<<"a";
     for(j=1; j<n-i; j++)
       cout<<" ";
       l=97;
     for(k=0; k<=i; k++)
       {
         printf("%c",l);
         l++;
       }
     cout<<endl;
   }


   
   return EXIT_SUCCESS;
}