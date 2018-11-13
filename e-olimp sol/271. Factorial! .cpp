#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[10001], b[10001];
int c[100000001], N ,n ,ii ,i ,m ,l ,q ,t ,k, j;
int main(int argc, char *argv[])
{
 scanf("%d", &N);

 if(N<=1)
     printf("1\n");
 else
 {
       strcpy(a,"1");
       for(ii=2;ii<=N;ii++)
       {
            itoa(ii,b,10);
            n=strlen(a);
            m=strlen(b);
            strrev(b);
            for(k=0;k<=n+m;k++)
               c[k]=0;

            for(i=0;i<n;i++)
            {
             q=0;
             for(j=0;j<m;j++)
             {
               t=(int)(a[i]-48)*(int)(b[j]-48)+c[i+j]+q;
               q=t/10;
               c[i+j]=t%10;

             }
             c[i+j]=q;
           }
           i=n+m-1;
           if(c[i]==0)
                i--;

           l=i+1;
               for(i=0;i<l;i++)
                 a[i]=(char)(c[i]+48);
               a[i]='\0';
               }
       for(i=l-1;i>=0;i--)
         printf("%d", c[i]);
         printf("\n");
       }


 return 0;
}