#include <iostream>
#include <set>

using namespace std;

int main()
{
  set <long> s;
  set <long >::iterator it;
  long i,x,n,maxx=0;

  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>x;

      if(x>maxx)
          maxx=x;

      s.insert(x);
  }

  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>x;

      if(x>maxx)
          maxx=x;

      s.insert(x);
  }

  it=s.find(maxx);
  s.erase(it);

  for(it=s.begin(); it!=s.end(); ++it)
  cout<<*it<<" ";
  
  cout<<maxx<<endl;



  return 0;
}