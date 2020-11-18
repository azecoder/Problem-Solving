#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int a,b,c;
  cin>>a>>b>>c;

  if(a==0 && b==0 && c==0)   cout<<"0"<<endl;
  else if(a==0 && b==0)   cout<<c<<endl;
  else if(a==0 && c==0 && b!=1 && b!=-1)   cout<<b<<"y"<<endl;
  else if(a==0 && c==0 && b==-1)   cout<<"-y"<<endl;
  else if(a==0 && c==0 && b==1)   cout<<"y"<<endl;
  else if(b==0 && c==0 && a!=1 && a!=-1)   cout<<a<<"x"<<endl;
  else if(b==0 && c==0 && a==1)   cout<<"x"<<endl;
  else if(b==0 && c==0 && a==-1)   cout<<"-x"<<endl;
  else if(a==0 && b!=0 && c!=0 && c>=1 && b!=1 && b!=-1)   cout<<b<<"y+"<<c<<endl;
  else if(a==0 && b!=0 && c!=0 && c<=-1 && b!=1 && b!=-1)   cout<<b<<"y-"<<abs(c)<<endl;
  else if(a==0 && b!=0 && c!=0 && c>=1 && b==1)   cout<<"y+"<<c<<endl;
  else if(a==0 && b!=0 && c!=0 && c>=1 && b==-1)   cout<<"-y+"<<c<<endl;
  else if(a==0 && b!=0 && c!=0 && c<=-1 && b==1)   cout<<"y-"<<abs(c)<<endl;
  else if(a==0 && b!=0 && c!=0 && c<=-1 && b==-1)   cout<<"-y-"<<abs(c)<<endl;
  else if(a!=0 && b==0 && c!=0 && c>=1 && a!=1 && a!=-1)   cout<<a<<"x+"<<c<<endl;
  else if(a!=0 && b==0 && c!=0 && c<=-1 && a!=1 && a!=-1)   cout<<a<<"x-"<<abs(c)<<endl;
  else if(a!=0 && b==0 && c!=0 && c>=1 && a==1)   cout<<"x+"<<c<<endl;
  else if(a!=0 && b==0 && c!=0 && c>=1 && a==-1)   cout<<"-x+"<<c<<endl;
  else if(a!=0 && b==0 && c!=0 && c<=-1 && a==1)   cout<<"x-"<<abs(c)<<endl;
  else if(a!=0 && b==0 && c!=0 && c<=-1 && a==-1)   cout<<"-x-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c==0 && b>1 && a!=1 && a!=-1)   cout<<a<<"x+"<<b<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b>1 && a==1)   cout<<"x+"<<b<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b>1 && a==-1)   cout<<"-x+"<<b<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b==1 && (a>1 || a<-1))   cout<<a<<"x+"<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b==1 && a==1)   cout<<"x+"<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b==1 && a==-1)   cout<<"-x+"<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b==-1 && (a>1 || a<-1))   cout<<a<<"x-"<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b==-1 && a==1)   cout<<"x-"<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b==-1 && a==-1)   cout<<"-x"<<"-y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b<-1 && (a>1 || a<-1))   cout<<a<<"x-"<<abs(b)<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b<-1 && a==1)   cout<<"x-"<<abs(b)<<"y"<<endl;
  else if(a!=0 && b!=0 && c==0 && b<-1 && a==-1)   cout<<"-x-"<<abs(b)<<"y"<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==1 && c==1)   cout<<"x+y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==-1 && c==-1)   cout<<"-x-y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==-1 && c==1)   cout<<"x-y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==-1 && c==1)   cout<<"-x-y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==1 && c==-1)   cout<<"x+y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==-1 && c==-1)   cout<<"x-y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==1 && c==1)   cout<<"-x+y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==1 && c==-1)   cout<<"-x+y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b>1 && c>1)   cout<<"x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b<-1 && c>1)   cout<<"x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b<-1 && c<-1)   cout<<"x-"<<abs(b)<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b>1 && c>1)   cout<<"-x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b<-1 && c>1)   cout<<"-x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b<-1 && c<-1)   cout<<"-x-"<<abs(b)<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==1 && c>1)   cout<<a<<"x+"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==1 && c>1)   cout<<a<<"x+"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==1 && c<-1)   cout<<a<<"x+"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==1 && c<-1)   cout<<a<<"x+"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==-1 && c>1)   cout<<a<<"x-"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==-1 && c>1)   cout<<a<<"x-"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==-1 && c<-1)   cout<<a<<"x-"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==-1 && c<-1)   cout<<a<<"x-"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b>1 && c==1)   cout<<a<<"x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b>1 && c==1)   cout<<a<<"x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b<-1 && c==1)   cout<<a<<"x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b<-1 && c==1)   cout<<a<<"x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b>1 && c==-1)   cout<<a<<"x+"<<b<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b>1 && c==-1)   cout<<a<<"x+"<<b<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b<-1 && c==-1)   cout<<a<<"x-"<<abs(b)<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b<-1 && c==-1)   cout<<a<<"x-"<<abs(b)<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==1 && c>1)   cout<<"x+"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==1 && c<-1)   cout<<"x+"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==-1 && c>1)   cout<<"x-"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b==-1 && c<-1)   cout<<"x-"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==1 && c>1)   cout<<"-x+"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==1 && c<-1)   cout<<"-x+"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==-1 && c>1)   cout<<"-x-"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b==-1 && c<-1)   cout<<"-x-"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b>1 && c==1)   cout<<"x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b>1 && c==-1)   cout<<"x+"<<b<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b>1 && c==1)   cout<<"-x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b>1 && c==-1)   cout<<"-x+"<<b<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b<-1 && c==1)   cout<<"x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==1 && b<-1 && c==-1)   cout<<"x-"<<abs(b)<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b<-1 && c==1)   cout<<"-x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a==-1 && b<-1 && c==-1)   cout<<"-x-"<<abs(b)<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==1 && c==1)   cout<<a<<"x+"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==1 && c==-1)   cout<<a<<"x+"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==-1 && c==1)   cout<<a<<"x-"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a>1 && b==-1 && c==-1)   cout<<a<<"x-"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==1 && c==1)   cout<<a<<"x+"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==1 && c==-1)   cout<<a<<"x+"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==-1 && c==1)   cout<<a<<"x-"<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a<-1 && b==-1 && c==-1)   cout<<a<<"x-"<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a!=1 && b!=1 && c!=1 && b>1 && c>1)    cout<<a<<"x+"<<b<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a!=1 && b!=1 && c!=1 && b<-1 && c>1)   cout<<a<<"x-"<<abs(b)<<"y+"<<c<<endl;
  else if(a!=0 && b!=0 && c!=0 && a!=1 && b!=1 && c!=1 && b>1 && c<-1)   cout<<a<<"x+"<<b<<"y-"<<abs(c)<<endl;
  else if(a!=0 && b!=0 && c!=0 && a!=1 && b!=1 && c!=1 && b<-1 && c<-1)  cout<<a<<"x-"<<abs(b)<<"y-"<<abs(c)<<endl;

  
  return EXIT_SUCCESS;
}