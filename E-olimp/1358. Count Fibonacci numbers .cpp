#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 1001


double a[size],g[size];
double maxx;
long m,j,s,t,i,n,d,k;


int main(int argc, char *argv[])
{
   cin>>n;

   for(d=0; d<n; d++)
        cin>>g[d];

   sort(g,g+n);

   maxx=g[n-1];
   a[1]=1;
   a[2]=1;
   i=3;
   do{
         a[i]=a[i-1]+a[i-2];
         i++;
         if(a[i-1]>=maxx)    break;
      }while(1);


   m=i-1; k=0;

   for(i=2; i<=m; i++)
       for(j=0;j<n;j++)
           if(a[i]==g[j])
              k++;

   cout<<k<<endl;


   
   return EXIT_SUCCESS;
}