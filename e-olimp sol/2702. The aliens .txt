#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <map>

using namespace std;
long n1,n2,n3,n,mas,s,s1,s2,i1,l,l1,l2,k,m,k1;
char a[100],b[1001],c[101],d[101];
int main(int argc, char *argv[])
{


   cin>>a;


   while(a[i1]!='+')b[l++]=a[i1++];i1++;
   while(a[i1]!='=')c[l1++]=a[i1++];i1++;
   while(i1<strlen(a))d[l2++]=a[i1++];
   for(int j=2;j<37;j++){
       k=0;
       s=0;s1=0;s2=0;
       for(int i=0;i<l;i++){
           mas=1;
           if(b[i]>=48 && b[i]<=57){
               if((b[i]-48)>=j){k=1;break;}
               for(int j1=0;j1<l-i-1;j1++)
                     mas*=j;
                  s+=(b[i]-48)*(mas);
           }
           if(b[i]>=65 && b[i]<=91){
               if((b[i]-55)>=j){k=1;break;}
               for(int j1=0;j1<l-i-1;j1++)
                     mas*=j;
                  s+=(b[i]-55)*(mas);
           }


       }
       if(!k)
       for(int i=0;i<l1;i++){
            if(c[i]>=48 && c[i]<=57){
               if((c[i]-48)>=j){k=1;break;}
                   mas=1;

               for(int j1=0;j1<l1-i-1;j1++)
                     mas*=j;
                  s1+=(c[i]-48)*(mas);
           }
           if(c[i]>=65 && c[i]<=91){
               if((c[i]-55)>=j){k=1;break;}
                   mas=1;

               for(int j1=0;j1<l1-i-1;j1++)
                     mas*=j;
                  s1+=(c[i]-55)*(mas);
           }


       }
       if(!k)
       for(int i=0;i<l2;i++){

               mas=1;
           if(d[i]>=48 && d[i]<=57){
               if((d[i]-48)>=j){k=1;break;}
               for(int j1=0;j1<l2-i-1;j1++)
                     mas*=j;
                  s2+=(d[i]-48)*(mas);
           }
           if(d[i]>=65 && d[i]<=91){
               if((d[i]-55)>=j){k=1;break;}
               for(int j1=0;j1<l2-i-1;j1++)
                     mas*=j;
                  s2+=(d[i]-55)*(mas);
           }
       }
       if(!k){
       m=j;
       if(s2==(s1+s) && k!=1){k1=1;break;}
   }
   }
   if(k1)
   cout<<m<<endl;
   else
   cout<<"-1\n";


   return 0;
} 