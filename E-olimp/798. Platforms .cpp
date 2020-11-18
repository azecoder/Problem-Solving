#include <cstdlib>
#include <iostream>

using namespace std;
long min(long a,long b){
if(a>b)
    return b;
    else
    return a;

}
long min1(long a,long b,long c){
   if(a>b)
    return c+2;
    else
    return c+1;
}
long n,a[1000001],b[1000000],c[10000000],s,x,y,as[100000];
int main(int argc, char *argv[])
{

cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
b[n-1]=0;
b[n]=100000;
a[n]=100000;
for(int i=n-2;i>=0;i--){
     x=a[i+1]-a[i];
     if(x<0)x=-x;
     x=b[i+1]+x;
     y=(a[i+2]-a[i])*3;
     if(y<0)y=-y;
     y=b[i+2]+y;

    b[i]=min(x,y);
    c[i]=min1(x,y,i);
}
long p,l=0,k=0;

for(int i=0;i<n-1;){i=c[i];as[k++]=i+1;}

    cout<<b[0]<<endl;
    cout<<k+1<<endl;
    s=0;
    cout<<1<<" ";
    for(int i=0;i<k-1;i++){
    cout<<as[i]<<" ";}cout<<n<<endl;




 return EXIT_SUCCESS;
}