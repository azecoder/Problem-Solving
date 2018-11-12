#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <fstream>
#include <set>
#include <map>
#include <cmath>
#pragma comment(linker,"/STACK:56777216")

using namespace std;
typedef long long ll;
typedef unsigned long long uu;
typedef long double ldb;
typedef double db;

int gcd(int a,int b){
if(b == 0)
 return a;
return gcd(b,a%b);
}
int lcm(int a,int b){
if(b == 0)
 return a;
return a*b/gcd(a,b);
}

uu squ(uu n) {
uu l = 1, r = (1LL << 32) - 1, mid;
while (l < r - 1) {
  mid = (l + r) / 2;
  if (mid * mid <= n) l = mid;
  else r = mid;
}
return l;
}

uu n,sq,son,ev,l[11],r[11],ans,lsq,rsq,sol,sag,ooo;

bool z[10],sv[2560],v[2560],bb;

uu square[2560],remaining[2560];

uu cal1(int p){
uu cvb = sag/p - (sol - 1)/p;
cvb-=ooo;
for(int i = p*2;i <= 2550;i = i+p)
   cvb-=remaining[i];

//if(p==1)
//    cout<<cvb<<endl;
remaining[p] = cvb;
v[p] = 1;
return cvb;
}
uu cal2(int p){
if(lsq>rsq){
   ooo=0;
   return 0;
}
if(p%9==0)
   p=p/9*3;
if(p%8==0)
   p=p/8*4;
else
   if(p%4==0)
       p=p/4*2;
uu cvb = rsq/p - (lsq - 1)/p;
ooo = cvb;



if(sv[p] == 1){
   bb = 1;
   return 0;
   }
for(int i = p*2;i <= 2550;i = i+p )
   cvb-=square[i];

square[p] = cvb;
sv[p] = 1;
return cvb;
}

void f(int ekob,int say){
if(v[ekob]==0){
   bb=0;
   uu zz=cal2(ekob);
   uu ww=cal1(ekob);
   if(say%2==1){
       ans+=ww;
   //if(ekob==1)
   //    cout<<ww<<endl;
   }
   else
       if(bb==0)
           ans+=zz;
   }
}

struct tt{
int ebb,cnt;
}qq[50000];

bool yyy(tt aa,tt ss){
if(aa.ebb>ss.ebb)
   return 0;
if(aa.ebb==ss.ebb)
   if(aa.cnt>ss.cnt)
       return 0;
return 1;
}

int main()
{


cin>>n;

son=1;
for(int i=1;i<64;i++)
   son=son*(uu)2;

sq=(uu)squ(n);

ans=sq;
ev=1;
for(int i=1;i<=18;i++)
   ev=ev*(uu)10;
// ev=10000;
// son=95412;
// ans=100;

for(int i=1;i<=8;i++)
   l[i]=(uu)i*ev+i,r[i]=(uu)(i+1)*ev+i;
l[9]=(uu)9*ev+9,r[9]=son;

if(n<=ev)
   {
       cout<<ans<<endl;
       return 0;
   }
else
   ans=1000000000;

int current;
for(int i=1;i<=9;i++)
   {
       current=0;
       sol=l[i];
       sag=min(r[i],n);
       if(sol>sag)
           break;

       memset(v,0,sizeof(v));
       memset(sv,0,sizeof(sv));
       memset(square,0,sizeof(square));
       memset(remaining,0,sizeof(remaining));
       memset(qq,0,sizeof(qq));

       lsq=(uu)squ(sol-1)+1;

        //if(lsq*lsq>sol-1)
        //    lsq--;

       rsq=(uu)squ(sag);
        //if(rsq*rsq>sag)
        //    rsq--;
       int oo=1<<i;
       for(int j=1;j<oo;j++)
           {
               int yop=0;
               ++current;
               for(int o=1;o<=i;o++)
                   if(j&(1<<(o-1)))
                       yop=lcm(o,yop),qq[current].cnt++;
               qq[current].ebb=yop;
           }
       sort(qq+1,qq+1+current,yyy);

       for(int j=current;j>0;j--)
           f(qq[j].ebb,qq[j].cnt);



   }

cout<<ans<<endl;


return 0;
}