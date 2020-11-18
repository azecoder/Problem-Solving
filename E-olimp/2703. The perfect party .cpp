#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <map>

using namespace std;
char a[1000];
long ini,inj,len,h,yox,s;
int main(int argc, char *argv[])
{

   gets(a);
   h=strlen(a);
   for(int i=0;i<h;i++){
       for(int j=i+1;j<h;j++){yox=0;s=1;
           if(a[i]==a[j] && len<j-i){
               for(int k=i+1;k<=i+(double)(j-i)/2;k++)
                   if(a[k]!=a[j-s++]){yox=1;break;}
           if(!yox){ini=i;inj=j;len=j-i;}
           }
       }

   }
   for(int i=ini;i<inj;i++)
       cout<<a[i];
       cout<<a[inj]<<endl;

 
   return 0;
}