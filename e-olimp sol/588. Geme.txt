#include <cstdlib>
#include <iostream>

#include <stdio.h>
using namespace std;
  int n,a[30001],b[30001];
int min(int a,int b){
  return a>b?b:a;
  }
int mod(int a){
  return a>0?a:-a;
}
int main(int argc, char *argv[])
{ FILE *inf = fopen("input.txt", "r");
 FILE *outf = fopen("output.txt", "w");


  fscanf(inf,"%d",&n);
  for(int i=0;i<n;i++)
      fscanf(inf,"%d",&a[i]);
  b[n-1]=0;
  b[n-2]=a[n-1]-a[n-2];
  if(b[n-2]<0)b[n-2]=-b[n-2];
  for(int i=n-3;i>=0;i--)
      b[i]=min(b[i+1]+mod(a[i]-a[i+1]),b[i+2]+mod(3*(a[i]-a[i+2])));
  fprintf(outf,"%d\n",b[0]);
     fclose(inf);
  fclose(outf);
  
  return EXIT_SUCCESS;
}