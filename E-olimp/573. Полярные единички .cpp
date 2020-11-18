#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

   int n,q,q1,l,k=0,m=0;
   cin>>n;
   q=0;
   q1=0;
   l=1;
   for(int i=0;i<10;i++)
       if(((n%10)*i)%10==1)m=1;

       if(m)
   while(1){
       if((10*q+1)%n==0){k=1;break;    }
       q=(10*q+1)%n;
       l++;
       if(q1==q)break;
       q1=q;


   }
   if(!k)cout<<"no\n";
   else{
   for(int i=0;i<l-1;i++)
       cout<<1;
       cout<<1<<endl;
   }

  
   return EXIT_SUCCESS;
}