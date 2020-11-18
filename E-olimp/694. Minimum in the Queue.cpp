#include <cstdlib>
#include <iostream>
#include <queue>
#include <set>
#include <math.h>
using namespace std;

long  long n,a,b,c, x[1000001],x0,m,mn,k,l,o,sum,p1,say[1000000],sil,h;
double y;

int main(int argc, char *argv[])
{
  queue <long> q;
  set <long> s;
  set <long> ::iterator it;
  cin>>n>>a>>b>>c>>x[0];



  l=1;

  o=1;
  m=0;
  sum=0;
  for(int l=1;l<=n;l++){
      x[l]=((a*x[l-1]*x[l-1]+(b*x[l-1])+c)/100) % 1000000;

      if(x[l]%5<2 && !q.empty()){
          sil=q.front();
          if(say[sil]==1){
              s.erase(sil);
              say[sil]=0;
           }
          if(say[sil]>1)
              say[sil]--;
          q.pop();

       }
      if(x[l]%5>=2 ){
          say[x[l]]++;
          s.insert(x[l]);
          q.push(x[l]);
      }
      if(!s.empty()){
          it=s.begin();
          mn=*it;
          sum+=mn;}




  }
  cout<<sum<<endl;






       return EXIT_SUCCESS;
}