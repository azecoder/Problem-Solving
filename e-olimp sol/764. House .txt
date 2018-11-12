#include <cstdlib>
#include <iostream>

using namespace std;
long mas[5001][5001];
long m,n,k,sum=0,x,y,a,b;
int main(int argc, char *argv[])
{
   cin>>n>>m>>a>>b>>k;
   for(int i=0;i<k;i++){
       cin>>x>>y;
       mas[x][y]=1;
   }
       
   for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
           mas[i][j]+=mas[i-1][j]+mas[i][j-1]-mas[i-1][j-1];
   for(int i=1;i<=n-a+1;i++)
       for(int j=1;j<=m-b+1;j++)
           if(mas[i-1][j-1]+mas[i-1+a][j-1+b]-mas[i-1][j-1+b]-mas[i-1+a][j-1]==0)sum++;
           
       
     cout<<sum<<endl;  
       return EXIT_SUCCESS;
}