#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

char a[100],b[100],d[10]="problem";
int i,j,f=0,tap=0,len,k;

int main(int argc, char *argv[])
{
  while(gets(a)!=NULL){
      len=strlen(a);
     
      for(i=0;i<=len-1;i++){
          if((a[i]>=65) && (a[i]<=90)){
              a[i]=a[i]+32;    
          }    
      }
      i=0;
      while(i<=len-7){
          for(k=i;k<=i+6;k++){
              if((a[k])!=(d[k-i]) && (tap==0)){
                  f=1;
                  break;    
              }    
          }
          if(f==0){
              tap=1;    
          }    
          f=0;
          i++;
      }
      if(tap==1){
          printf("yes\n");
          tap=0;
          f=0;    
      }
      else{
          printf("no\n");    
      }
     
  }
  
  return EXIT_SUCCESS;
}