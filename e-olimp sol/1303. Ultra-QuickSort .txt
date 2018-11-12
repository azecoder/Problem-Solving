#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
#define ll long long
#define size 500000
int A[size],C[size], ind1,ind2,sz;

ll cnt(int a, int b){
   if(a==b) return 0;
   
   int c=((a+b)>>1);
   ll aux=cnt(a,c)+cnt(c+1,b);
   
   ind1=a; ind2=c+1; sz=0;
   
   while(ind1<=c && ind2<=b){
       if(A[ind1]<A[ind2]) C[sz]=A[ind1++];
       else{
           C[sz]=A[ind2++];
           aux+=c-ind1+1;
       }
       ++sz;
   }
    
   if(ind1>c) for(;ind2<=b;++ind2,++sz) C[sz]=A[ind2];
   else for(;ind1<=c;++ind1,++sz) C[sz]=A[ind1];
   
   for(int i=a;i<=b;++i) A[i]=C[i-a];
   
   return aux;
}

int main(){
   int N;
   
   while(true){
       scanf("%d",&N);
       if(N==0) break;
       
       for(int i=0;i<N;++i) scanf("%d",&A[i]);
       
       printf("%lld\n",cnt(0,N-1));
   }


   
   return EXIT_SUCCESS;
}