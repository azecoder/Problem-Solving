#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 10000001
char a[massiv], b[massiv];
long long c[massiv], n, m, f, l, i, j, k, q, t;

using namespace std;

int main(int argc, char *argv[])
{

    cin>>a;

b[i]=char(49);
n=strlen(a);
m=strlen(b);

    i=n-1;
    j=m-1;
    q=0;
    while(i>=0&&j>=0)
         {
            t=(int)a[i]-48+(int)b[j]-48+q;

            if(t>=10)
              {
                c[k]=t-10;      q=1;
              }

            else
              {
                c[k]=t;         q=0;
              }
            i--;
            j--;
            k++;
         }



    while(i>=0)
         {
            t=(int)a[i]-48+q;

            if(t>=10)
               {
                 c[k]=t-10;      q=1;
               }
            else
               {
                 c[k]=t;         q=0;
               }
            i--;
            k++;
        }

if(q==1)
{c[k]=1;
k++;
}

    l=k;
    for(k=l-1;k>=0;k--)
        cout<<c[k];

   cout<<endl;


 
 return EXIT_SUCCESS;
}