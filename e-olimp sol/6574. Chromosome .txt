#include <stdio.h>
#include <string.h>

using namespace std;

int i,j,n,x,flag,etap;
char a[201];

int main()
{
  scanf("%d",&x);
  for(i=1; i<=x; i++){
      scanf("%s",a);
      n=strlen(a);
      flag=0;
      etap=0;

      for(j=0; j<n; j++){
          if(a[j]!='A' && a[j]!='B' && a[j]!='C' && a[j]!='D' && a[j]!='E' && a[j]!='F'){
              flag=1;
              break;
          }
      }

      if(a[0]=='A'){
          for(j=0; j<n-1; j++){
              if((a[j]=='A' && etap==0) || (a[j]=='A' && etap==1)){
                  etap=1;
              }
              else if((a[j]=='F' && etap==1) || (a[j]=='F' && etap==2)){
                  etap=2;
              }
              else if((a[j]=='C' && etap==2) || (a[j]=='C' && etap==3)){
                  etap=3;
              }
              else{
                  flag=1;
                  break;
              }
          }
      }
      else{
          for(j=1; j<n-1; j++){
              if((a[j]=='A' && etap==0) || (a[j]=='A' && etap==1)){
                  etap=1;
              }
              else if((a[j]=='F' && etap==1) || (a[j]=='F' && etap==2)){
                  etap=2;
              }
              else if((a[j]=='C' && etap==2) || (a[j]=='C' && etap==3)){
                  etap=3;
              }
              else{
                  flag=1;
                  break;
              }
          }
      }


      if(flag){
          printf("Good\n");
      }
      else{
          printf("Infected!\n");
      }
  }



  return 0;
} 