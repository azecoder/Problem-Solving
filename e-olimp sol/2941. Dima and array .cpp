#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

   long a[500010];
   long t[2000100];
   long n,q;
   char ch;
   long l,r;
 void build(long a[],long v, long l, long r){
       if(l==r) t[v]=a[l];
       else{
           int m= (l+r)/2;
           build(a,2*v,l,m);
           build(a,2*v+1,m+1,r);
           t[v]=t[2*v]+t[2*v+1];
       }
   }
   long sum(long v,long left_pos, long rigth_pos, long l , long r){
       if(l>r)  return 0;
       if(l==left_pos && r==rigth_pos) return t[v];
       else{
           long m = (left_pos+rigth_pos)/2;
           long leftPos = sum(2*v,left_pos,m,l,min(m,r));
           long rigthPos = sum(2*v+1,m+1,rigth_pos,max(m+1, l),r);
           return leftPos+rigthPos;
       }
   }
   void update(long v, long left_pos,long rigth_pos, long pos,  long value){
       if(left_pos==rigth_pos) t[v]=value;
       else{
           long m = (left_pos+rigth_pos)/2;
           if(pos<=m){
               update(2*v, left_pos, m, pos, value);
           }
           else
               update(2*v+1, m+1, rigth_pos, pos, value);
           t[v] =  t[2*v] + t[2*v+1];
       }
   }

int main(int argc, char *argv[])
{
       scanf("%ld",&n);
       scanf("%ld",&q);
       for(int i=1;i<=n;i++)
           scanf("%ld",&a[i]);
       build(a, 1, 1, n);
       for(int i=0;i<q;i++){
           scanf("%s",&ch);
           scanf("%ld",&l);
           scanf("%ld",&r);
           if(ch=='?')
               printf("%ld\n",sum(1, 1, n, l, r));
           else
               update(1, 1, n, l,r );
       }
   return 0;
} 