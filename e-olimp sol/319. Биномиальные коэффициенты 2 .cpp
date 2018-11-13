#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
long long n,t,k,a[100001],b[100001],l=0,c[10001],m,x,x1,mx;
void primes(){
  for(int i=2;i<=100000;i++)
      a[i]=1;
  for(int i=2;i<=317;i++)
      if(a[i])
          for(int j=i;j*i<100001;j++)
              a[i*j]=0;

}
int main(int argc, char *argv[])
{

    primes();
  for(int i=2;i<100001;i++)
      if(a[i])c[l++]=i;


  cin>>t;






  for(int i=0;i<t;i++){
      cin>>n>>k;
      if(n-k>k){x=k;x1=n-k;}else {x=n-k;x1=k;}



      for(int i=x1+1;i<=n;i++)
      if(a[i]){b[i]++;mx=i;}
      else{
          m=i;
          mx=i;
         // k=0;

         for(int j=0;c[j]*c[j]<=m;j++)
             while(m%c[j]==0){m/=c[j];b[c[j]]++;}
             if(m>1)b[m]++;
      }


      for(int i=2;i<=x;i++)
      if(a[i])b[i]--;
      else{
          m=i;
        //  k=0;

           for(int j=0;c[j]*c[j]<=m;j++)
             while(m%c[j]==0){m/=c[j];b[c[j]]--;}
             if(m>1)b[m]--;

      }
      int t=0;
      for(long i=2;i<=mx;i++)
          if(!t){
              if(b[i]>1){t=1;
              printf("%ld^%ld",i,b[i]);}
              if(b[i]==1){t=1;printf("%ld",i);}}
          else{
              if(b[i]>1)
                  printf(" * %ld^%ld",i,b[i]);;
              if(b[i]==1)
                  printf(" * %ld",i);
          }
      if(n==k || k<1)
      printf("1");

          printf("\n");
          for(int i=0;i<=n;i++)b[i]=0;


  }



   return EXIT_SUCCESS;
}