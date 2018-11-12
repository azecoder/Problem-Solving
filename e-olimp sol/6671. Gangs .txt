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
#pragma comment(linker,"/STACK:116777216")
#define MAXN 100100

using namespace std;

unsigned long long ctl[50];


string calc(int curctl,unsigned long long rank){
   if(curctl==0)
       return "";
   if(curctl==2)
       return "ES";

   int mid;

   for(int i=curctl;i>0;i-=2){
       if(rank<=(ctl[i-2]*ctl[curctl-i]))
           {
               mid = i;
               break;
           }
       rank-=(ctl[i-2]*ctl[curctl-i]);
   }

   unsigned long long lft;
   unsigned long long rght;

   if((rank%(ctl[curctl-mid]))==0)
       lft = rank / ctl[curctl-mid],rght = ctl[curctl-mid];
   else
       lft = rank / ctl[curctl-mid] + 1,rght = rank%ctl[curctl-mid];



   return "E" + calc(mid-2,lft) + "S" + calc(curctl-mid,rght);
}

int main()
{
   //ctl[1]=1;
   ctl[2]=1;
   ctl[0]=1;
   for(int i=4;i<=40;i+=2){
       for(int j=2;j<=i;j+=2){
           ctl[i]+=ctl[j-2]*ctl[i-j];

       }

   }



   int n;
   unsigned long long m;
   while(cin>>n>>m){
       if(n==0 && m==0)
           break;

       n--;
       n*=2;
       if(m>ctl[n])
           cout<<"ERROR"<<endl;
       else
           cout<<calc(n,m)<<endl;

   }



   return 0;
} 