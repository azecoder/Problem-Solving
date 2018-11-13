#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;

               // 5826 1008  1684  2497 6522 6767 5284 5023 2686 1964 1463




               char a[14],b[14],x[14],y[14];
int main() {
               long n,i,j,k,s=0,v=1,q,t,e=6,six,s2=0,z1=0,z2=0,u=0;


                   scanf("%lld%lld",&z1,&z2);

               if(z1>=z2)
           {
               u=0;
               while(z1>0)
           {
               y[u++]=(char)(z1%10+48);
               z1/=10;
           }



               for(i=0;i<u;i++)
               a[i]=y[u-1-i];

               z2--;
               if(z2<0)
               z2=0;
               u=0;
               while(z2>0)
           {
               x[u++]=(char)(z2%10+48);
               z2/=10;
           }



               for(i=0;i<u;i++)
               b[i]=x[u-1-i];
                   }


                   else {

           {
               u=0;
               while(z2>0)
           {
               y[u++]=(char)(z2%10+48);
               z2/=10;
           }



               for(i=0;i<u;i++)
               a[i]=y[u-1-i];

               z1--;
               if(z1<0)
               z1=0;
               u=0;
               while(z1>0)
           {
               x[u++]=(char)(z1%10+48);
               z1/=10;
           }



               for(i=0;i<u;i++)
               b[i]=x[u-1-i];
                   }
                   }




                   n=strlen(a);

               for(i=n-1;i>=0;i--)
       {

           t=0;
           q=0;
           six=0;

           for(j=0;j<i;j++)
           t=10*t+(int)a[j]-48;

           for(j=i;j<n;j++)
           q=10*q+(int)a[j]-48;

           for(j=i+1;j<n;j++)
           six=six*10+(int)a[j]-48;

           if(a[i]=='6')
           s+=t*v+six+1;
           else
          s+=(t+q/(e*v))*v;




             v*=10;
               }





               v=1;

                       n=strlen(b);

               for(i=n-1;i>=0;i--)
       {

           t=0;
           q=0;
           six=0;

           for(j=0;j<i;j++)
           t=10*t+(int)b[j]-48;

           for(j=i;j<n;j++)
           q=10*q+(int)b[j]-48;

           for(j=i+1;j<n;j++)
           six=six*10+(int)b[j]-48;

           if(b[i]=='6')
           s2+=t*v+six+1;
           else
          s2+=(t+q/(e*v))*v;




             v*=10;
               }





               if(s<=s2)
               cout<<s2-s<<endl;
               else
               cout<<s-s2<<endl;

           return 0;



        }