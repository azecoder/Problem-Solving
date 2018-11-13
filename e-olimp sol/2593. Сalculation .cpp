#include <cstdlib>
#include <iostream>

using namespace std;
long long n,p,sum,s1;
string s;
int main(int argc, char *argv[])
{
   cin>>n>>s;
   for(int i=2;i<11;i++) {
       s1=1;
       sum=0;
       for(int j=s.size()-1;j>=0;j--) {
           sum+=(s[j]-48)*s1;
           s1*=i;
       }
       if(sum==n){p=i;break;}
   }
   cout<<p<<endl;

   return 0;
} 