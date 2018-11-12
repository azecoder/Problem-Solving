#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

unsigned long long m;
int t;

unsigned long long ust(unsigned long long a,unsigned long long b)
{
 if(b==1)      return a%m;
 if(b%2==0)    return ust(((a%m)*(a%m))%m,b/2)%m;
 else          return ((a%m)*ust(((a%m)*(a%m))%m,b/2))%m;        
}

int ust2(int a,int b)
{
 int s=1;
 for(int i=0;i<b;i++)  s*=a;
 return s;    
}

int main()
{
 unsigned long long a,b;
 int t, i = 1;
 while(cin>>a>>b>>t)
 {
   if( a == 0 && b == 0 && t == 0 )      break;
   m = ust2(10,t);
   cout<<"Case #"<<i<<": "<<ust(a,b)%m<<endl;
   i++;
 }  
return EXIT_SUCCESS;
}