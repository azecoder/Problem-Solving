#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 17

char binary[MAX],temp[2];
int code[MAX];
int digit[MAX]={1,-2, 4, -8, 16, -32, 64, -128, 256, -512, 1024, 
-2048, 4096, -8192, 16384, -32768, 65536};
int decimal;
int main(int argc, char *argv[])
{
   int t,i,k,len;
        scanf("%d",&t);
        
       while(t--)
        {
             scanf("%s",temp);
             if(strcmp(temp,"d")==0)//from decimal
             {
                  scanf("%d",&decimal);
                  if( decimal ==0 ) 
                  {
                   printf("From decimal: %d is %d\n",decimal,0);
                   continue;
                  }
                  k = decimal;
                  i=0;
                  while (abs(k)>0)
                  {
                   code[i]=k%(-2);
                   k/=(-2);
                   if(code[i]<0)//if<0, k++    //<base:-2>
                   {
                        code[i]*=(-1);
                        k++;
                   }
                   i++;
                  }
              printf("From decimal: %d is ",decimal);
              while(i--) printf("%d",code[i]);
                  printf("\n");
             }
             else //from binary
             {
                  scanf("%s",binary);
                  decimal = 0;
                  len= strlen(binary);
                  for(i=len-1; i>=0; i--)
                  {
                   decimal+=digit[len-1-i]*(binary[i]-'0');
                  }
                  printf("From binary: %s is %d\n",binary, decimal);
             }
        }
        
        return 0;
}