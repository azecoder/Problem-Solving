#include <cstdlib>
#include <fstream.h>
#include <iostream>
#include <string.h>

using namespace std;
int n,k,m,sum;
char a[30001];
int main(int argc, char *argv[])
{
   ifstream cin("input.txt");
  ofstream cout("output.txt");
   cin>>k;
   cin>>a;
   n=strlen(a);
   for(int i=0;i<=n-k;i++){
       m=0;
       for(int j=0;j<=k/2-1;j++)
           if(a[i+j]!=a[i+k-1-j]){m=1;break;}
       if(!m){sum++;}
   }
   cout<<sum<<endl;

   cin.close();
  cout.close();

   return EXIT_SUCCESS;
}