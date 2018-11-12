#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

char a[10];
long long n,k=1,i;
int main()
{
  cin>>n;
  for(i=1;i<=n;i++)
  {  
     cin>>k;
     if(k==1)        cout<<"1"<<endl;
     else if(k==2)   cout<<"12"<<endl;
     else if(k==3)   cout<<"213"<<endl;
     else if(k==4)   cout<<"2314"<<endl;
     else if(k==5)   cout<<"24513"<<endl;
     else if(k==6)   cout<<"312456"<<endl;
     else if(k==7)   cout<<"3412567"<<endl;
     else if(k==8)   cout<<"36712458"<<endl;   
  }

 return EXIT_SUCCESS;
}