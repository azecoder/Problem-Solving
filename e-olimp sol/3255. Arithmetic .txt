#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char a[1001];
int i,n,ans;

int main(int argc, char *argv[])
{
  gets(a);

n=strlen(a);



ans=a[0]-48;
for(i=0;i<n;i++)
  {
   if(a[i]=='+')
     ans=ans+(a[i+1]-48);
   if(a[i]=='*')
     ans=ans*(a[i+1]-48);
  }
  printf("%d\n",ans);
 
 return 0;
}