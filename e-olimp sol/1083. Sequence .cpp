#include <cstdlib>
#include <iostream>

using namespace std;
long b[1000000],a[100001],d[100001],h,h1;
int main(int argc, char *argv[])
{
   long long n,l=0,m;
   cin>>n>>m;
 
   b[4]=1;
   m--;
   while(m--){
       l++;
       
       n=((n%10000)*(n%10000))%10000;
       if(b[n])break;
       else    {
           a[l]=n;
           b[n]=1;
           d[n]=l;
           }
       
   }
   
   if(m>0){
       h=l-d[n];
       h1=m;
       h1%=h;
       
       cout<<a[d[n]+h1]<<endl;
   }
   else
       cout<<n<<endl;

   return EXIT_SUCCESS;
} 