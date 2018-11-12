#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int k,m,n,T,K;
  cin>>k;

  while(k--){

      cin>>n>>m;
      if(n>m)swap(n,m);

      T=K=0;
      for(int a=1;a<=n;a++)
          for(int b=1;b<=m;b++)
              T+=(n-a+1)*(m-b+1);
      for(int a=1;a<=n;a++)
          K+=(n-a+1)*(m-a+1);
      cout<<K<<" "<<T-K<<endl;

  }

  return 0;
}