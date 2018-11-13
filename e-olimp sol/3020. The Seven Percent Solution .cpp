#include <stdio.h>
#include <stdlib.h>
#include <cstring>
int main(int argc, char *argv[])
{
  char a[1001],b[10001];
  long long i,j,n;
  
  while(1)
  {
      gets(a);
      
      if(a[0]=='#')
      break;
      
      j=0;
      n=strlen(a);
      
      for(i=0; i<n; i++)
      if(a[i]==' ')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='0';
          j=j+3;           
      }
      else if(a[i]=='!')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='1';
          j=j+3;           
      }
      else if(a[i]=='$')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='4';
          j=j+3;           
      }
      else if(a[i]=='%')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='5';
          j=j+3;           
      }
      else if(a[i]=='(')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='8';
          j=j+3;           
      }
      else if(a[i]==')')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='9';
          j=j+3;           
      }
      else if(a[i]=='%')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='5';
          j=j+3;           
      }
      else if(a[i]=='*')
      {
          b[j]='%';
          b[j+1]='2';
          b[j+2]='a';
          j=j+3;           
      }
      else
      {
          b[j]=a[i];
          j++;
      }
      
      
      for(i=0; i<j; i++)
      printf("%c",b[i]);
      printf("\n");
  }
  



return 0;

}