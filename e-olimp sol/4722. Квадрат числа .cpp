#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#define size 10001
int main(int argc, char *argv[])
{
  char a[size];
  int m;
      cin.get(a,778);
      cin>>m;
  int n;
      n=strlen(a);
  int i,j;
  int l,w;
  char b[size],c[size];
      for(i=0; i<m; i++)
         for(j=0; j<n; j++)
            {
               b[l]=a[j]; l++;
               c[w]=a[j]; w++;
            }
  strrev(b);
  strrev(c);
  int q,t,d[size];
      for(i=0; i<l; i++)
         {
            q=0;
            for(j=0; j<w; j++)
                {
                   t=(int)(b[i]-48)*(int)(c[j]-48)+q+d[i+j];
                   q=t/10;
                   d[i+j]=t%10;
                }
            d[i+j]=q;
         }
  int k;
      i=l+w-1;
      if(d[i]==0)  i--;
      k=i+1;
      for(i=k-1; i>=0; i--)
         cout<<d[i];
      cout<<endl;

  
  return EXIT_SUCCESS;
}