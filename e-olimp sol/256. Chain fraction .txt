#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int n,m,k=1,a[1000],l=0,q,i;
 cin>>n>>m;
 while(1){
      a[l++]=n/m;
      q=n%m;
      if(q==0)   break;
      else       k++;
      n=m;
      m=q;
  }
  cout<<k<<endl;
  for(i=0;i<l-1;i++)
      cout<<a[i]<<" ";
  cout<<a[l-1]<<endl;

  return EXIT_SUCCESS;
}