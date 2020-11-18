#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int i, j, n, k;
char tel[MAX];
int l=0, a[MAX];
int s, d=0, m[MAX], say;

int main(int argc, char *argv[])
{
gets(tel);

n=strlen(tel);

//     nomrede olmayan reqemlerin sayini tapmaq...
for(j=0; j<=9; j++)
{
 for(i=0; i<n; i++)
   {
     if(j==tel[i]-48) { k++; a[l]=j; l++; break; }
   }
}
printf("%d\n",10-k);

if(k!=10)
{
//    nomrede olmayan reqemleri ekrana tapmaq...
for(i=0; i<=9; i++)
{ s=0;
 for(l=0; l<k; l++)
   {
     if(a[l]!=i)
       { s++;
         if(s==k)
           { say++; m[d]=i; d++;}
       }
   }
}

//  sonuncu reqemden sora ' ' boshluq isharesini yigishdirmaq
for(d=0; d<say-1; d++)
 printf("%d ",m[d]);

printf("%d\n",m[say-1]);
}



return 0;
}