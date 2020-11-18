#include <cstdlib>
#include <iostream>

using namespace std;

   int n,m,k,a[201][201],x,y,a1[201][201],l,mx,a2[201][201],a3[201][201],a4[201][201];

int main(int argc, char *argv[]) {

       cin>>m>>n>>k;

       for(int i=0;i<k;i++){
           cin>>x>>y;
           a[y-1][x-1]=1;
       }
       l=0;


       for(int i=0;i<m;i++)
           if(a[n-1][i])a1[n-1][i]=1;


       for(int i=n-2;i>=0;i--)
           for(int j=0;j<m;j++)
               if(a1[i+1][j] || a[i][j])a1[i][j]=1;

       for(int i=0;i<n;i++)
           for(int j=0;j<m;j++)
               if(!a1[i][j])l++;
       if(l>mx)mx=l;

       l=0;
         for(int i=0;i<m;i++)
           if(a[0][i])a2[0][i]=1;

       for(int i=1;i<n;i++)
           for(int j=0;j<m;j++)
               if(a2[i-1][j] || a[i][j])a2[i][j]=1;

       for(int i=0;i<n;i++)
           for(int j=0;j<m;j++)
               if(!a2[i][j])l++;
       if(l>mx)mx=l;

       l=0;
         for(int i=0;i<n;i++)
           if(a[i][0])a3[i][0]=1;

       for(int i=1;i<m;i++)
           for(int j=0;j<n;j++)
               if(a3[j][i-1] || a[j][i])a3[j][i]=1;

       for(int i=0;i<n;i++)
           for(int j=0;j<m;j++)
               if(!a3[i][j])l++;
       if(l>mx)mx=l;
       l=0;
         for(int i=0;i<n;i++)
           if(a[i][m-1])a4[i][m-1]=1;

       for(int i=m-2;i>=0;i--)
           for(int j=0;j<n;j++)
               if(a4[j][i+1] || a[j][i])a4[j][i]=1;

       for(int i=0;i<n;i++)
           for(int j=0;j<m;j++)
               if(!a4[i][j])l++;
       if(l>mx)mx=l;    
	   cout<<mx<<endl;

    return 0;
} 