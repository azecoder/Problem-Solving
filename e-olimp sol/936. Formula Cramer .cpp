#include <cstdlib>
#include <iostream>

float a,b,e,c,d,f;
float x,y,k;
using namespace std;

int main(int argc, char *argv[])
{
  cin>>a>>b>>e>>c>>d>>f;

if((a/c)==(b/d) && (a/c)!=(e/f))
 k=1;

else
 {

   x=(e*d-b*f)/(a*d-b*c);
   y=(a*f-e*c)/(a*d-b*c);

   printf("%.3f\n%.3f\n",x,y);
 }


  return EXIT_SUCCESS;
}