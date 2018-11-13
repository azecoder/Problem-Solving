#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>
using namespace std;
char a[10];
double b[10],total;
int i,j,aa[10];
int main(int argc, char *argv[])
{
 while(scanf("%s",a)!=EOF){
     total++;
     if(strcmp(a,"Re")==0){
         aa[1]++;    
     }    
     if(strcmp(a,"Pt")==0){
         aa[2]++;    
     }  
     if(strcmp(a,"Cc")==0){
         aa[3]++;    
     }  
     if(strcmp(a,"Ea")==0){
         aa[4]++;    
     }  
     if(strcmp(a,"Tb")==0){
         aa[5]++;    
     }  
     if(strcmp(a,"Cm")==0){
         aa[6]++;    
     }  
     if(strcmp(a,"Ex")==0){
         aa[7]++;    
     }  
 }
 b[1]=aa[1]/total;
 b[2]=aa[2]/total;
 b[3]=aa[3]/total;
 b[4]=aa[4]/total;
 b[5]=aa[5]/total;
 b[6]=aa[6]/total;
 b[7]=aa[7]/total;
 printf("Re %d %.2lf\n",aa[1],b[1]);
 printf("Pt %d %.2lf\n",aa[2],b[2]);
 printf("Cc %d %.2lf\n",aa[3],b[3]);
 printf("Ea %d %.2lf\n",aa[4],b[4]);
 printf("Tb %d %.2lf\n",aa[5],b[5]);
 printf("Cm %d %.2lf\n",aa[6],b[6]);
 printf("Ex %d %.2lf\n",aa[7],b[7]);
 printf("Total %d 1.00\n",(int)total);

 return EXIT_SUCCESS;
}