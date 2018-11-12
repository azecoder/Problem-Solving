#include <cstdlib>
#include <iostream>
int k=0;

using namespace std;
long long gcd(long long  a,long long  b,long long  c,long long  d){
double m;
long long n,x;
if((a==c && b==d) ){
 k=1;return 0;}
 if(a>b && b){

     if(b>=c){
         m=(double)a/b;
         n=m-4;
         if(n>=1)
            a-=n*b;
        }
        else
        {
             if(a>=c){
             x=a-c;

         m=(double)x/b;
         n=m-4;
         if(n>=1)
            a-=n*b;}
            else{
                 m=(double)a/b;
                 n=m-4;
                 if(n>=1)
                    a-=n*b;
        }
     }
 }
if(b==0)
 return a;
 if(a==0)
 return b;

if(a>=b)
 return gcd(a-b,b,c,d);
 else
 return gcd(b-a,a,c,d);
}

int main(int argc, char *argv[])
{
long long  a,b,c,d;
int n;
cin>>n;
while(n--){
cin>>a>>b>>c>>d;
k=0;
gcd(a,b,c,d);
if(k==1)
   cout<<"YES\n";
   else
   cout<<"NO\n";
}
 
 return EXIT_SUCCESS;
}