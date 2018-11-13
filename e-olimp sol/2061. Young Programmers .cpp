#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long mn,max,og,qz,dog,dq,x,y;
  cin>>mn>>max>>dog>>dq;

  for(int j=0;j<=max;j++)
      if((dq*j)%dog==0)
      {
          x=(dq*j)/dog;
          y=j;
          if(x+y>=mn && x+y<=max && x>=dq && y>=dog)
          {
              cout<<x+y<<" "<<x<<" "<<y<<endl;
              break;
          }
      }

 return EXIT_SUCCESS;
}