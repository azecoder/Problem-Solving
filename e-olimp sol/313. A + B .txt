#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;
char a[1000001], b[1000001], s[1000001];

int n, m, i, j, k, q, t, c[1000001], nn, nur;
int main()
{

 scanf("%d ", &nur);
 while(nur)

 {

      n=m=i=j=k=q=t=nn=0;
 gets(s);

 nn=strlen(s);
 for(i=0;s[i]!='+';i++){
   a[i]=s[i];}
 n=i;

 for(j=i+1;j<nn;j++){
   b[j-n-1]=s[j];
  }
 m=j-n-1;




 i=n-1;
 j=m-1;
 q=0;
 k=0;

 while(i>=0&&j>=0)
 {
     t=(int)a[i]+(int)b[j]-48-48+q;

     if(t>=10)
     {
         c[k]=t-10;
         q=1;
         i--;
         j--;
         k++;
     }
     else
     {
         c[k]=t;
         q=0;
         i--;
         j--;
         k++;
     }
 }

 while(i>=0)
 {
     t=(int)a[i]-48+q;

     if(t>=10)
     {
         c[k]=t-10;
         q=1;
         i--;
         k++;
     }
     else
     {
         c[k]=t;
         q=0;
         i--;
         k++;
     }
 }

 while(j>=0)
 {
     t=(int)b[j]-48+q;

     if(t>=10)
     {
         c[k]=t-10;
         q=1;
         j--;
         k++;
     }
     else
     {
         c[k]=t;
         q=0;
         j--;
         k++;
     }
 }

 if(q==1)
   c[k++]=1;


   for(i=k-1;i>=0;i--)
     printf("%d",c[i]);
 printf("\n");


 nur--;
}


 
 return EXIT_SUCCESS;
}