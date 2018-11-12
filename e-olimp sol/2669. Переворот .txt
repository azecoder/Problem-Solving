#include <cstdlib>
#include <iostream>

using namespace std;
#define size 101

int n,m;
int i,j;
int a[size][size];

int main(int argc, char *argv[])
{
   cin>>n>>m;

   for(i=0; i<n; i++)
       for(j=0; j<m; j++)
           cin>>a[i][j];



   cout<<m<<" "<<n<<endl;

   for(i=0; i<m; i++){
       for(j=n-1; j>=0; j--){
           cout<<a[j][i];
       if(j==0)
             cout<<endl;
       else
             cout<<" ";
           }
       }



   
   return EXIT_SUCCESS;
}