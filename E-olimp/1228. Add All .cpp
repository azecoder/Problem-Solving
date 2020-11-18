#include <cstdlib>
#include <iostream>
#include<set>
#include<cstdio>
#include<utility>

using namespace std;
multiset  < long long > s;
multiset < long long > ::iterator iter;
long long i,j;

int main(int argc, char *argv[])
{
long long a,b,n,m,c,d=0;
 cin>>m;

     for(j=0;j<m;j++){
         cin>>c;
          s.insert(c);
     }


      while(s.size()>1)
      {
          a=*s.begin();
         s.erase(s.begin());
         b=*s.begin();
         s.erase(s.begin());
         s.insert(a+b);
         d+=(a+b);
         }



printf("%lld\n",d);

return 0;
} 