#include <cstdlib>
#include <iostream>

using namespace std;
long i,y,k,a[10001],b[100001],m;
int main(int argc, char *argv[])
{
   while(cin>>k){
   m=0;
   for(i=k+1;i<=2*k;i++)
       if(k*i%(i-k)==0){
           y=k*i/(i-k);
           a[m]=y;
           b[m++]=i;
       }

       cout<<m<<endl;
       for(int j=0;j<m;j++)
           cout<<"1/"<<k<<" = "<<"1/"<<a[j]<<" + "<<"1/"<<b[j]<<endl;
       }
   
   return EXIT_SUCCESS;
} 