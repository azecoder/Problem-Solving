#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

double l,w,d,k;
long n,i,j,cnt,t;
int main(int argc, char *argv[]) 
{
  cin>>n;
  for(t=1;t<=n;t++)
  {
     i=2;
     cin>>l>>w>>d>>k;

     if((l+w+d)<=125)   i=0;
     else if(l>56)      i=1;
     else if(w>45)      i=1;
     else if(d>25)      i=1;

     if(k>7)   i=1;
 
     if(i==0 || i==2)
     {
        cout<<"1"<<endl;
        cnt++;
     }
     else if(i==1)   cout<<"0"<<endl;
  }
  cout<<cnt<<endl;


  return 0;
}