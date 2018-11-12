#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
unsigned int x[260],t,w,i=0,n,k,j,m=0,c[260];
struct array{
 unsigned int a[260];
 unsigned int say;    
}l[11];
int main(int argc, char *argv[])
{
 scanf("%u",&t);
 for(w=1;w<=t;w++){
 i=0;
 m=0;
 while(scanf("%u",&n)!=EOF){
     if(n==0){
         break;    
     }
     i++;
     x[i]=n;    
 }
 
 if(i!=0)
 {
     for(j=1;j<=10;j++){
     l[j].say=0;    
 }
 sort(x+1,x+i+1);
 for(k=1;k<=i;k++){
     if(x[k]==1){
         l[1].say++;
         l[1].a[l[1].say]=1;    
     } 
     else if(x[k]%2==1){
         l[2].say++;
         l[2].a[l[2].say]=x[k];    
     }   
     else if((x[k]%2==0)&& (x[k]%4!=0) && x[k]/2!=1){
             l[3].say++;
             l[3].a[l[3].say]=x[k];
         
     }
     else if((x[k]%4==0)&& (x[k]%8!=0) && (x[k]/4!=1)){
          l[4].say++;
          l[4].a[l[4].say]=x[k];   
     }
     else if((x[k]%8==0)&& (x[k]%16!=0) && (x[k]/8!=1)){
          l[5].say++;
          l[5].a[l[5].say]=x[k];   
     }
     else if((x[k]%16==0)&& (x[k]%32!=0) && (x[k]/16!=1)){
          l[6].say++;
          l[6].a[l[6].say]=x[k];   
     }
     else if((x[k]%32==0)&& (x[k]%64!=0)&& (x[k]/32!=1)){
          l[7].say++;
          l[7].a[l[7].say]=x[k];   
     }
     else if((x[k]%64==0)&& (x[k]%128!=0)&& (x[k]/64!=1)){
          l[8].say++;
          l[8].a[l[8].say]=x[k];   
     }
     else if((x[k]%128==0)&& (x[k]%256!=0)&& (x[k]/128!=1)){
          l[9].say++;
          l[9].a[l[9].say]=x[k];   
     }
     else{
         l[10].say++;
         l[10].a[l[10].say]=x[k];    
     }
     
 }
 
 for(i=2;i<=9;i++){
     for(k=1;k<=l[i].say;k++){
         m++;
         c[m]=l[i].a[k];    
     }    
 }
 for(k=l[10].say;k>=1;k--){
     m++;
     c[m]=l[10].a[k];    
 }
 
 for(k=1;k<=l[1].say;k++){
     m++;
     c[m]=l[1].a[k];    
 }
 for(k=1;k<m;k++){
     printf("%u ",c[k]);    
 }
 printf("%u\n",c[m]);
}
}

 return 0;
}