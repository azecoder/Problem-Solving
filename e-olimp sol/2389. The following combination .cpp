#include <cstdlib>
#include <iostream>

using namespace std;
int a[100],n,k,k1,b[100],in;


int main(int argc, char *argv[])
{
   cin>>n>>k;

   for(int i=0;i<k;i++)
       cin>>a[i];
   for(int i=k-1;i>=0;i--){
       b[a[i]]=1;
       if(!k1)
       for(int j=a[i]+1;j<=n;j++)
           if(!b[j]){b[a[i]]=0;a[i]=j;b[j]=1;k1=1;in=i;break;}

   }



   for(int i=in+1;i<k;i++)
       for(int j=a[in];j<a[i];j++)
           if(!b[j]){b[a[i]]=0;a[i]=j;b[j]=1; break;}
   if(k1){

   for(int i=0;i<k-1;i++)
       cout<<a[i]<<" ";
       cout<<a[k-1]<<endl;
   }
   else
   cout<<0<<endl;

   return EXIT_SUCCESS;
} 