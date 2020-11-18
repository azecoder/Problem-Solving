#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
long long a[1000010],n,l1,l2,l3,s;
long name(long x){
 double a1,b,c;
 long l1,l2,l3;

  if(a[x]) return a[x];
 
 
  if(a[x]==0){
      a1=sqrt(x);
      a1=x-a1;
      b=cos(2*x);
      b=1-b;
      b=b/2;
      b*=x;
      c=log(x);
      l1=floor(a1);
      l2=floor(c);
      l3=floor(b);
      if(a[l1]==0)a[l1]=name(l1);
      if(a[l2]==0)a[l2]=name(l2);
      if(a[l3]==0)a[l3]=name(l3);
       for(int i=0;i<10;i++)
     s=((a[l1]%1000000)+
             (a[l2]%1000000)+
              a[l3]%1000000)%1000000;
      return s;}
}

int main(int argc, char *argv[])
{
  a[0]=1;
  a[1]=3;
  cin>>n;
  for(int i=2;i<1000000;i++)a[i]=0;
  while(n!=-1){
     
      a[n]=name(n);
      cout<<a[n]<<endl;
   
   cin>>n;  
  }
 
     return EXIT_SUCCESS;
} 