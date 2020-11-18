#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long
#define MX 12
#define MOD 1000000007

LL r[MX], c[MX];
string s[MX][MX];
LL memo[MX][MX];

LL func(int lft, int rgt)
{
   if(memo[lft][rgt]!=-1) return memo[lft][rgt];

   s[lft][rgt]="";
   if(rgt==lft)
   {
       stringstream ss;
       ss<<"A"<<lft+1;
       ss>>s[lft][rgt];
       return 0;
   }

   LL ret=(1LL<<62);
   int mid;
   for(int i=lft;i<rgt;i++)
   {
       LL tmp = r[lft]*c[i]*c[rgt] + func(lft, i) + func(i+1, rgt);
       if(tmp<ret)
       {
           ret=tmp;
           mid=i;
       }
   }
   s[lft][rgt]="("+s[lft][mid]+" x "+s[mid+1][rgt]+")";

return memo[lft][rgt]=ret;
}

int main()
{
   int n,kk=1;
   while(cin>>n && n)
   {
       for(int i=0;i<n;i++)
           cin>>r[i]>>c[i];

       SET(memo);
       LL tmp = func(0,n-1);
       cout<<"Case "<<kk++<<": "<<s[0][n-1]<<endl;
   }
return 0;
}