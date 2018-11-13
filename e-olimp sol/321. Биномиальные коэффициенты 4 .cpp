#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
long long n,m,k,p,p1,c[200001],s=1,q,q1,d[20001],h;
long a[200001],w;
void primes(long MAX){
  for(int i=0;i<MAX;i++)a[i]=1;

  for(int i=2;i<=sqrt(MAX);i++)
      if(a[i])
          for(int j=i;i*j<MAX;j++)
              a[i*j]=0;


}

long l,b[200001],say;
int main(int argc, char *argv[])
{
  cin>>n>>k>>m;
  w=k+100;

  primes(w);



  for(int i=2;i<=k+100;i++)
      if(a[i])d[l++]=i;



  l=0;
  while(p1<k){
      p1=d[say++];
      p=p1;
      while((long)k/p){
          b[p1]+=(long)k/p;
          p*=p1;

      }
      if(b[p1])a[l++]=p1;
  }




  for(int i=0;i<k;i++) c[i]=n-k+1+i;
  h=c[0];
  for(int i=0;i<l;i++){
      q=1;
      q1=0;
      if(c[0]%a[i]==0)q=a[i]; else {q1=a[i]-h%a[i];q=a[i];}
      if(b[a[i]])
          for(int j=q1;j<k;j+=q)
              if(b[a[i]]){
                  while(c[j]%a[i]==0 && b[a[i]]){c[j]/=a[i];b[a[i]]--;}} else break;
  }
  for(int i=0;i<k;i++){s*=c[i]%m;s%=m;}

  cout<<s%m<<endl;
 
  return EXIT_SUCCESS;
}