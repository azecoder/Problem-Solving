#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long long ust1(long long a,long long b)
{
if(b==1)
    return a%3;
if(b%2==0)
    return ust1(((a%3)*(a%3))%3,b/2)%3;
else
    return ((a%3)*ust1(((a%3)*(a%3))%3,b/2))%3;
}
long long ust2(long long a,long long b)
{
if(b==1)
    return a%5;
if(b%2==0)
    return ust2(((a%5)*(a%5))%5,b/2)%5;
else
    return ((a%5)*ust2(((a%5)*(a%5))%5,b/2))%5;
}

char c[10001];
long long i, n, res1, res2, s1, s2;
int main()
{
 cin>>c;
 n = strlen(c);
 for( i = 0; i < strlen(c)-1; i++ ){
      s1 = s1%3 + ust1(2,strlen(c)-i-1)*((int)c[i] - 48);
      s2 = s2%5 + ust2(2,strlen(c)-i-1)*((int)c[i] - 48);
      }
 s1 = s1%3 + ((int)c[n-1] - 48);
 s2 = s2%5 + ((int)c[n-1] - 48);
 res1 = s1%3;
 res2 = s2%5;
 if( res1 == 0 && res2 == 0 )
      cout<<"BOTH"<<endl;
 else if( res1 == 0 )
      cout<<"FIRST"<<endl;
 else if( res2 == 0 )
      cout<<"SECOND"<<endl;
 else
      cout<<"NONE"<<endl;

 return 0;
} 