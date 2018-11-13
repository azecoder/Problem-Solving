#include <cstdlib>
#include <iostream>
#define MAX 40015
#include <math.h>
#include <set>
#include <stdio.h>
using namespace std;
int a[40016],l=0,l1=0,b[90000],m,n,k=0;
void prime(){
  int i,j;
  for(i=0;i<MAX;i++)
      a[i]=1;
  for(int i=2;i<=sqrt(MAX);i++)
      if(a[i])
          for(j=i;j*i<MAX;j++)
              a[i*j]=0;


}
int main(int argc, char *argv[])
{
  prime();
  for(int i=2;i<MAX;i++)
      if(a[i])
          a[l++]=i;

  for(int i=0;i<l;i++)
      for(int j=i;j<l;j++)
          if((a[i]+a[j])<40001 && !b[a[i]+a[j]])
              b[a[i]+a[j]]=1;


      //    s.insert(a[i]+a[j]);
//    cout<<"ys";
  cin>>n>>m;

  for(int i=n;i<m;i++){
      if(b[i]){k=1;
          printf("%d",i);
      }
      if(b[i] && i<m-1)printf(" ");
      if(b[i] && i==m-1 && b[m])printf(" ");
   }
      if(b[m])k=1;
  if(b[m] && k)
      cout<<m<<endl;
      else
          if(k)
              cout<<endl;


   
   return EXIT_SUCCESS;
}