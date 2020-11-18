#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#define MODN 10000007

using namespace std;


// "Visual C++ 9.0"da gonder...


int main()
{
   int t,n,x;
   double probwin,problose,ans=0,z;

   cin>>t;
   double curprob = 1.0;
   while(t--){
       z=1;
       curprob=1.0;
       ans=0;
       cin>>n>>probwin>>x;
       problose=1-probwin;

       for(int i=1;i<n;i++)
           z*=problose;

       if(probwin==0){
           printf("0.0000\n");
           continue;
       }
       if(probwin==1){
           if(x==1)
               printf("1.0000\n");
           else
               printf("0.0000\n");
           continue;
       }

       //cout<<problose <<" problose"<<endl;

       for(int i=1;i<x;i++)
           curprob*=problose;
       curprob*=probwin;
       ans+=curprob;
       curprob/=probwin;
           curprob*=problose;
       //cout<<ans<<endl;

       for(int j=0;j<100000;j++){
           curprob*=z;
           curprob*=probwin;
           ans+=curprob;
           curprob/=probwin;
           curprob*=problose;
           //cout<<curprob<<endl;
       }

       printf("%.4lf\n",ans);

   }





   return 0;
}