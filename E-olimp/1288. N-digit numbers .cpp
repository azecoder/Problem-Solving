#include <cstdlib>
#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;
long long n,a1[10000000],b1[10000000],i=0,q,l=0,k,g1=0;
char a[10000000],b[10000000];
int main(int argc, char *argv[])
{

  cin>>n>>a>>b;
  long long m,y;

       for(i=0;a[i]!='\0';i++)
           a1[i]=a[i]-48;
       for(l=0;b[l]!='\0';l++)
           b1[l]=b[l]-48;

   if(a1[0]!=0 && b1[0]!=0){


       int p,g,e,v,v1;
       if(i>l){p=i;g=l;}else{g=i; p=l;}

         for(int j=0;j<g;j++)
           if(a1[j]==b1[j])
               k=0;
               else{
               k=1;break;}
               int s=1,s1=1,s2=1;
              // cout<<n<<endl;
       if(k==1){
           if(i==l){
           cout<<2;
           v=(n-i)/2;
           for(int j=0;j<v;j++)
               printf("00");
                if((n-i)%2!=0)
                printf("0");}
           if(i>l ){
               printf("1");
               v=(i-l-1)/2;

               for(int j=0;j<v;j++)
                   printf("00");
                   if((i-l-1)%2!=0)
                   printf("0");
                   printf("1");
                   v=(n-i)/2;
               for(int j=0;j<v;j++)
                   printf("00");
                    if((n-i)%2!=0)
                   printf("0");

               }
            if(i<l ){
               cout<<1;
               v=(l-i-1)/2;
               for(int j=0;j<v;j++)
                   printf("00");
                    if((l-i-1)%2!=0)
                   printf("0");
                   printf("1");
                   v=(n-l)/2;
               for(int j=0;j<v;j++)
                   printf("00");
                    if((n-l)%2!=0)
                   printf("0");
               }
           }
       if(k==0){
       printf("1");
        v=(n-g)/2;
           for(int j=0;j<v;j++)
               printf("00");
                if((n-g)%2!=0)
               printf("0");

       }
       y=0;
           cout<<endl;

   }
   int v;
   if(a1[0]==0 && b1[0]!=0)
   {

       printf("1");
       v=(n-l)/2;
       for(int j=0;j<v;j++)
               printf("00");
               if((n-l)%2!=0)
               printf("0");
       printf("\n");
       y=0;

   }
   if(b1[0]==0 && a1[0]!=0)
   {

       printf("1");
       v=(n-i)/2;
       for(int j=0;j<v;j++)
               printf("00");
               if((n-i)%2!=0)
               printf("0");
       printf("\n");
       y=0;
   }
       if(y!=0)
           printf("0\n");
 
   return EXIT_SUCCESS;
} 