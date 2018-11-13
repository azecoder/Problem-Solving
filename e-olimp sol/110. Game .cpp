#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
   int n,m,k,o;
       cin>>n;
   m=n;
   k=0;
   while(n%2==0)    n/=2;

   if(n==1)    cout<<"0\n";
   else
   {
       n=m/2;
       n+=1;
       while(m!=n)
       {
           o=n;
           while(o%2==0)    o/=2;
           if(o==1)
           {
               cout<<m-n<<"\n";
               break;
           }
           n++;
       }
   }
  
  return EXIT_SUCCESS;
}