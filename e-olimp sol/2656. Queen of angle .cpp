#include <cstdlib>
#include <iostream>

using namespace std;

long mas[1001][101];
int main(int argc, char *argv[])
{
   long m,n,a,b,mn;
   cin>>n>>m;
   if(n==1 && m==1)
       cout<<1<<endl;
       else {
       a=0;b=m-1;
       mas[a][b]=2;

       for(int i=0;i<b;i++)
           mas[a][i]=1;
       for(int i=n-1;i>a;i--)
           mas[i][b]=1;
       for(int i=a+1, j=b-1;i<n && j>=0 ;i++ , j--)
           mas[i][j]=1;
       for(int l=1;l<n;l++){

           for(int i=m-1;i>=0;i--){
               if(mas[l][i]==0){
                   a=l;b=i;
                   mas[a][b]=2;break;  }
           }
           for(int i=0;i<b;i++)
               mas[a][i]=1;
           for(int i=n-1;i>a;i--)
               mas[i][b]=1;

           for(int i=a+1, j=b-1;i<n , j>=0 ;i++ , j--){
               mas[i][j]=1;
           }
       }
       cout<<mas[n-1][0]<<endl;
   }
 
   return 0;
}