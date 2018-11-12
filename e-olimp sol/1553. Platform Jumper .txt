#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
long long n,g,v,b[1000],h,l,max1,x[10000],y[100000],c[100000],x1;

int main(int argc, char *argv[])
{
   
   float len;
float m;
   while(cin>>n>>v>>g){
       for(int i=0;i<60;i++)b[i]=0;
   for(int i=0;i<n;i++)
       cin>>x[i]>>y[i]>>c[i];
   for(int i=0;i<n;i++)
       for(int j=1;j<n;j++)
           if(y[j]>y[j-1]){
               x1=y[j];
               y[j]=y[j-1];
               y[j-1]=x1;
               x1=x[j];
               x[j]=x[j-1];
               x[j-1]=x1;
               x1=c[j];
               c[j]=c[j-1];
               c[j-1]=x1;
           }
   b[0]=c[0];
   for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++){
           if(c[j]>b[j])b[j]=c[j];
           h=y[i]-y[j];
           l=x[i]-x[j];
           len=(float)(v*v*h*2)/g;
           if(len>=l*l)
               if(b[j]<b[i]+c[j])
                   b[j]=b[i]+c[j];
           
       
   }  
   max1=0;
   for(int i=0;i<n;i++)
       if(max1<b[i])
           max1=b[i];
    cout<<max1<<endl;    
           }
                     
     return EXIT_SUCCESS;
} 