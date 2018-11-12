#include <cstdlib>
#include <iostream>

using namespace std;
int n;
int k,i,j;

int main(int argc, char *argv[])
{
   cin>>n;

   k=n*2+1;

   for(i=0; i<k; i++){
       for(j=0; j<k; j++){
           if(i==n || j==n)
               cout<<"*";
           else
               cout<<".";
           }
       cout<<endl;
       }

   
   return EXIT_SUCCESS;
}