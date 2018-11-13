#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int mark[1000][1000];

int v[20000];
int n1,n2;

struct state{
  int v1,v2,custo;
  state( int v1,int v2,int custo ):v1(v1),v2(v2),custo(custo){}
};

char s1[50],s2[50];

int readdata(){
  
  if( scanf("%s",s1) != 1 ) return 0;
  
  sscanf(s1+13,"%s",s2);
  s1[13] = '\0';
  
  int i;
  n1 = n2 = 0;
  
  for(i=0;i<13;i++){
      if( s1[i] == 'y' ) n1 |= (1<<i);
      if( s2[i] == 'y' ) n2 |= (1<<i);
  }
  return 1;
}

int process(){
  
  printf("%d\n",mark[v[n1]][v[n2]]);
  
  return 0;
}

int main(){
  memset(mark,-1,sizeof(mark));
  memset(v,-1,sizeof(v));
  
  int g = 0;
  
  int i,j,val;
  
  for(i=0;i<(1<<13);i++){
      
      if( v[i] != -1 ) continue;
      
      v[i] = g;

      val = i;
      for(j=0;j<13;j++){

          if( (val>>12)&1 ){
              val ^= (1<<12);
              val <<= 1;
              val++;
          }
          else{
              val <<= 1;
          }

          if( v[val] == -1 ) v[val] = g;
      }
      
      g++;
  }

  queue < state > fila;
  
  fila.push(state(0,8191,0));
  mark[v[0]][v[8191]] = 0;
  
  int t1,t2;
  int n1,n2;
  
  while( !fila.empty() ){
      state top = fila.front();
      fila.pop();
      
      t1 = top.v1;
      t2 = top.v2;

      for(i=0;i<14;i++){
          
          for(j=0;j<14;j++){
              
              n1 = t1;
              n2 = t2;
              
              if( t1 & (1<<0) )   n2 |= (1<<0);
              else                n2 &= 0x1FFE;
              if( t1 & (1<<1) )   n2 |= (1<<1);
              else                n2 &= 0x1FFD;
              if( t1 & (1<<2) )   n2 |= (1<<2);
              else                n2 &= 0x1FFB;
              
              if( t2 & (1<<0) )   n1 |= (1<<0);
              else                n1 &= 0x1FFE;
              if( t2 & (1<<1) )   n1 |= (1<<1);
              else                n1 &= 0x1FFD;
              if( t2 & (1<<2) )   n1 |= (1<<2);
              else                n1 &= 0x1FFB;
              
              if( mark[v[n1]][v[n2]] == -1 ){
                  mark[v[n1]][v[n2]] = top.custo+1;
                  fila.push( state(n1,n2,top.custo+1) );
              }
              
              if( (t2>>12)&1 ){
                  t2 ^= (1<<12);
                  t2 <<= 1;
                  t2++;
              }
              else{
                  t2 <<= 1;
              }                
          }
          
          if( (t1>>12)&1 ){
              t1 ^= (1<<12);
              t1 <<= 1;
              t1++;
          }
          else{
              t1 <<= 1;
          }
      }
      
  }

  while (readdata()) process();
  
  return 0;
}