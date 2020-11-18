#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

long long p[1010][1010],sum[1010],v[1010];
long long kk,ant,post;
long long n,M;

int readdata(){
      scanf("%lld %lld",&n,&M);
      if( n == 0 && M == 0 ) return 0;

      int i,k=0;

      for(i=0;i<n;i++){
          scanf("%lld",&v[i]);
      }
      return 1;
}

void process(){

  int i,j,k;
  long long best = 0;
  
  sum[n] = 0;
  for(i=n-1;i>=0;i--) sum[i] = sum[i+1] + v[i];
  
  p[0][0] = v[0]%M;
  for(i=1;i<n;i++)       p[0][i] = (p[0][i-1] + v[i])%M;
   
     
  if( p[0][n-1] > best ) best = p[0][n-1];
      

  for(i=0;i<n;i++){
      kk = 0;

      for(j=i;j<n;j++){
          if( i > 0 ){
              if( j > i ) p[i][j] = ( p[i][j-1] + (p[i-1][j-1]*v[j])%M )%M;
              else        p[i][j] = ( (p[i-1][j-1]*v[j])%M )%M; 
          }

          ant = p[i][j];
          if( j > i ){
              ant -= p[i][j-1];
              ant %= M;
              ant += M;
              ant %= M;
          }
           
          post = 0;
          if( j+1 < n ) post = sum[j+1];
          
           kk += (ant*post)%M;
           kk %= M;
      }
     
      if( kk > best ) best = kk;
  }

  printf("%lld\n",best);
}

int main(){
   
  while( readdata())         process();


  return 0;
}