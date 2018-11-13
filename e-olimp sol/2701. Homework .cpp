#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>

using namespace std;
long s1,s2,s,a[100],h,k,l,o,mas;
char n[100];
int main(int argc, char *argv[])
{
   cin>>n>>s1>>s2;
   h=strlen(n);
   for(int i=0;i<h;i++){
       mas=1;
       if((n[i]-48)>=s1){k=1;break;}
       for(int j=0;j<h-i-1;j++)
           mas*=s1;
       s+=(n[i]-48)*(mas);
   }
   while(s>=s2){
       a[l++]=s%s2;
       s/=s2;
   }
   if(s)
       a[l++]=s;
   if(!k){
       for(int i=l-1;i>0;i--)    cout<<a[i];
       cout<<a[0]<<endl;
   }
   else   cout<<"-1\n";

   return 0;
} 