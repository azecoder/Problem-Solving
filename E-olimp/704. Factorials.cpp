#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int n,i,s=1,m,j,k;
   cin>>m;
   for(j=0;j<m;j++){
      s=1;
      cin>>n;

      for(i=1;i<=n;i++){
         s*=i;
         while(s%10==0)   s/=10;
         if(s>9999)   s%=10000;
      }
      cout<<s%10<<"\n";
   }
   
   return EXIT_SUCCESS;
}