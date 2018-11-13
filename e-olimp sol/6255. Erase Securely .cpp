#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
int n,i,j,k;
char a[10000],b[10000],f=0;
int main(int argc, char *argv[])
{
  scanf("%d",&n);
  scanf("%s",a);
  scanf("%s",b);
  if(n%2==1){
      for(i=0;i<=strlen(a)-1;i++){
          if( ((a[i]=='0') && (b[i]!='1') )  || (   (a[i]=='1') && (b[i]!='0') ) ){
               f=1;
               printf("Deletion failed\n");
               break;
          }
      }
      if(f==0){
          printf("Deletion succeeded\n");
      }

  }
  if(n%2==0){
      for(i=0;i<=strlen(a)-1;i++){
          if( ( (a[i]=='1') && (b[i]=='0') ) || ( (a[i]=='1') && (b[i]=='0')) ){
               f=1;
               printf("Deletion failed\n");
               break;
          }
      }
      if(f==0){
          printf("Deletion succeeded\n");
      }

  }

 
  return EXIT_SUCCESS;
}