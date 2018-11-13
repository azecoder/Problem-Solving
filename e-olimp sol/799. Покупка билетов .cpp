#include <cstdlib>
#include <iostream>

using namespace std;
int n;
struct {
 long  bir,iki,uc;
}t[5050];
long a[5500][6],mn;
int main(int argc, char *argv[])
{
 cin>>n;
     for(int i=1;i<=n;i++)
         cin>>t[i].bir>>t[i].iki>>t[i].uc;
   t[n].iki=700000000;t[n].uc=700000000;

    t[n-1].uc=700000000;
   t[n+1].iki=700000000;t[n+1].uc=700000000;t[n+1].bir=700000000;
    t[n+2].iki=700000000;t[n+2].uc=700000000;t[n+2].bir=700000000;
    t[n+3].iki=70000000;t[n+3].uc=700000000;t[n+3].bir=700000000;
    a[n+1][1]=0;
    a[n+1][2]=0;
    a[n+1][3]=0;
    a[n][2]=700000000;
    a[n-1][3]=700000000;
    a[n][3]=700000000;


     a[n-1][2]=t[n-1].iki;
     a[n][1]=t[n].bir;
     a[n-1][1]=a[n][1]+t[n-1].bir;


 for(int i=n-2;i>=1;i--)
     for(int j=1;j<=3;j++){
        mn=700000000;
         if(mn>=a[i+j][1])
             mn=a[i+j][1];
         if(mn>=a[i+j][2])
             mn=a[i+j][2];
         if(mn>=a[i+j][3])
             mn=a[i+j][3];
         if(j==1 )
             a[i][j]=mn+t[i].bir;
         if(j==2 )
             a[i][j]=mn+t[i].iki;
         if(j==3 )
             a[i][j]=mn+t[i].uc;

     }

     mn=700000000;
     for(int j=1;j<=3;j++)
         if(mn>=a[1][j])
             mn=a[1][j];
             if(n)
     cout<<mn<<endl;

  
   return EXIT_SUCCESS;
}