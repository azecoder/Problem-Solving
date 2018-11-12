#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   long a,b,l;
   cin>>a>>b;
   l=2;
   if(a!=1 && b>2){
   if(b%2!=0)
       for(int i=0;i<a;i++)
           for(int j=0;j<a;j++){
               if(j!=1 && i==0 && j<a-1)cout<<"2 "; if(j!=1 && i==0 && j==a-1)cout<<"2\n";
               if(j==1 && i==0 && j<a-1 )cout<<"1 ";if(j==1 && i==0 && j==a-1 )cout<<"1\n";
               if(i==1 && j==1 && j<a-1)cout<<(b+1)/2<<" "; if(i==1 && j==1 && j==a-1)cout<<(b+1)/2<<"\n";
               if(i==1 && j!=1 && j<a-1) cout<<"1 "; if(i==1 && j!=1 && j==a-1) cout<<"1\n";
               if(i>1 && j<l && j<a-1) cout<<"0 "; if(i>1 && j<l && j==a-1) cout<<"0\n";
               if(i>1 && j>=l && j<a-1) cout<<"1 ";  if(i>1 && j>=l && j==a-1) cout<<"1\n";
               if(i>l)l++;
           }
   if(b%2==0)
       for(int i=0;i<a;i++)
           for(int j=0;j<a;j++){
               if(j!=1 && i==0 && j<a-1)cout<<"2 "; if(j!=1 && i==0 && j==a-1)cout<<"2\n";
               if(j==1 && i==0 && j<a-1)cout<<"1 ";  if(j==1 && i==0 && j==a-1)cout<<"1\n";
               if(i==1 && j==1 && j<a-1)cout<<(b)/2<<" ";  if(i==1 && j==1 && j==a-1)cout<<(b)/2<<"\n";
               if(i==1 && j!=1 && j==0 && j<a-1) cout<<"0 "; if(i==1 && j!=1 && j==0&& j==a-1) cout<<"0\n";
               if(i==1 && j!=1 && j!=0 && j<a-1) cout<<"1 "; if(i==1 && j!=1 && j==a-1) cout<<"1\n";
               if(i>1 && j<l && j<a-1) cout<<"0 "; if(i>1 && j<l && j==a-1) cout<<"0\n";
               if(i>1 && j>=l && j<a-1) cout<<"1 ";  if(i>1 && j>=l && j==a-1) cout<<"1\n";
               if(i>l)l++;
           }
       }


       if(b==1 && a!=1)cout<<"Impossible\n";
       if(b==2 && a==1)
           cout<<"Impossible\n";
       if(a==1 && b==1)
          cout<<"Impossible\n";
          if(a==1 && b!=1 && b!=2)
          cout<<"Impossible\n";
           if(a==2  && b==2)
          cout<<"Impossible\n";
          l=0;
       if(b==2 && a>2){
           for(int i=0;i<a;i++){
               for(int j=0;j<a;j++){
                   if(i<a-3){
                   if(i==j )cout<<"1 ";
                   if(i!=j && j<a-1) cout<<"0 ";
                   if(i!=j && j==a-1) cout<<"0\n";
                   }
                   if(i>=a-3){
                       if(j<a-3) cout<<"0 ";
                       if(j==a-3 && i==a-3) cout<<"1 ";
                       if(j==a-2 && i==a-3) cout<<"1 ";
                       if(j==a-1 && i==a-3) cout<<"0\n";
                       if(j==a-3 && i==a-2) cout<<"0 ";
                       if(j==a-2 && i==a-2) cout<<"1 ";
                       if(j==a-1 && i==a-2) cout<<"1\n";
                       if(j==a-3 && i==a-1) cout<<"1 ";
                       if(j==a-2 && i==a-1) cout<<"0 ";
                       if(j==a-1 && i==a-1) cout<<"1\n";
                   }
               }

       }}
   
   return 0;
} 