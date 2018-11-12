#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;
long long n,l,h,i,k=0,m,a;
int main(int argc, char *argv[])
{
  cin>>m;

       l=2;
       n=m;
       a=m;
       if(n<0) n=-n;
   if(n%2==0){

      m=n;
           int h=sqrt(m);
           for(int i=2;i<=h;i+=2){
              if(m==1 && k%2!=0 && a<0)break;
               if(m==1 && a>0) break;
                m=n;k=0;
               if(m%i==0){
                   while(m%i==0)
                   {
                       k++;
                       m/=i;
                   }

               }
           }
       if(m==1 ){
           if(k%2==0 && a<0 )
               cout<<"1\n";
           if(k%2!=0 && a<0)
               cout<<k<<endl;
            if(a>0)
               cout<<k<<endl;
           }
           else
               cout<<"1\n";

   }
      else
      {
           m=n;
           int h=sqrt(m);
           for(int i=3;i<=h;i+=2){
               if(m==1 && k%2!=0 && a<0)break;
               if(m==1 && a>0) break;

                m=n;k=0;
               if(m%i==0){
                   while(m%i==0)
                   {
                       k++;
                       m/=i;
                   }

               }
           }
       if(m==1 ){
           if(k%2==0 && a<0 )
               cout<<"1\n";
           if(k%2!=0 && a<0)
               cout<<k<<endl;
            if(a>0)
               cout<<k<<endl;
           }
           else
               cout<<"1\n";


   }

   
   return EXIT_SUCCESS;
} 