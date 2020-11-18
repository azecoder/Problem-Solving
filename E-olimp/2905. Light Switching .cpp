#include <cstdlib>
#include <iostream>
#include <cmath>
#define MAX 100001
using namespace std;
   long long a[MAX];
   struct root{
       long long sum, add;

       }t[4*MAX];
   void build( long long v, long long left_pos, long long rigth_pos){
       if(left_pos==rigth_pos){
           t[v].add=0;
           t[v].sum=0;
           return;
       }
       long long m=(left_pos+rigth_pos)/2;
       build(2*v, left_pos,m);
       build(2*v+1,m+1,rigth_pos);
       t[v].sum=t[2*v].sum+t[2*v+1].sum;
       t[v].add=0;
   }

     void push(long long v, long long left_pos, long long rigth_pos){
       if(t[v].add==0) return;
       long long m=(left_pos+rigth_pos)/2;
       t[2*v].sum=(m-left_pos+1)-t[2*v].sum;
       t[2*v+1].sum=(rigth_pos-m)-t[2*v+1].sum;
       t[2*v].add = 1 - t[2*v].add;
       t[2*v+1].add = 1 - t[2*v+1].add;;
       t[v].add=0;

   }
   long long sum(long long v, long long left_pos, long long rigth_pos, long long l, long long r){

       if(left_pos==l && rigth_pos==r){
           return t[v].sum;
       }
       if(l>r) return 0;
       long long m = (left_pos+rigth_pos)/2;

       push(v, left_pos, rigth_pos);

       long long left_side = sum(2*v, left_pos, m, l, min(m,r));
       long long rigth_side = sum(2*v+1, m+1, rigth_pos, max(m+1,l),r);
       return left_side+rigth_side;

   }
   void setValue(long long v, long long left_pos, long long rigth_pos, long long l, long long r){

       if(l>r) return ;
       if(left_pos==l && rigth_pos==r){
           t[v].sum =(rigth_pos-left_pos+1)-t[v].sum;
           t[v].add = 1 - t[v].add;
           return;
       }

       long long m = (rigth_pos+left_pos)/2;

       push(v, left_pos, rigth_pos);
       setValue(2*v, left_pos, m, l, min(r,m));
       setValue(2*v+1, m+1, rigth_pos, max(l,m+1), r);
       t[v].sum=t[2*v].sum+ t[2*v+1].sum;

   }


   long long n,k,l,r,x;
   char ch;
int main(int argc, char *argv[])
{


   cin>>n>>k;

   build(1,1,n);
   for(int i=0;i<k;i++){
       scanf("%s\n",&ch);
       if(ch=='0'){
           scanf("%lld%lld",&l,&r);
           setValue(1,1,n,l,r);

       }else{
           scanf("%lld%lld",&l,&r);
           printf("%lld\n",sum(1,1,n,l,r));
           }


   }

   return 0;
} 