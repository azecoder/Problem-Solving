#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[101],b[301];
int i,j,n,m,ans=0,k,l;

int main(int argc, char *argv[])
{
  scanf("%s%s",a,b);

n=strlen(a);
m=strlen(b);

k=0;
i=0;
m:
   for(j=k;j<m;j++)
      {
       if(a[i]==b[j])
        {
         ans+=j;
         k=j+1;
         i++;
         l++;
         if(i==n) break;
         else goto m;
        }
      }






if(l==n)      printf("YES\n%d\n",ans);
else          printf("NO\n");

 
 return 0;
}