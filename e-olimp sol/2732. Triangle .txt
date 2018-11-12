#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,k,a,b,c;
  cin>>k;
  for(i=1; i<=k; i++)
  {
      cin>>a>>b>>c;

      if(a+b<=c || a+c<=b || b+c<=a)
      cout<<"Case #"<<i<<": invalid!"<<endl;
      else
      {
          if(a==b && b==c)
          cout<<"Case #"<<i<<": equilateral"<<endl;
          else if((a==b && b!=c) || (a==c && a!=c) || (b==c && a!=b))
          cout<<"Case #"<<i<<": isosceles"<<endl;
          else
          cout<<"Case #"<<i<<": scalene"<<endl;
      }
  }


  return EXIT_SUCCESS;
}