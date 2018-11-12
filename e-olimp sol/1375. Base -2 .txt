#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

long a, n, i,l;
string s;
int main()
{

 scanf("%ld", &a);
for(i=0; i<a; i++)
{
 scanf("%ld", &n);
 if(!n)
  {
   printf("Case #%ld: 0\n",i+1);
      continue;
  }

    s="";
   while(n!=1)
    {
      if(n%2)   n=n-1, s=s+'1';
      else      s=s+'0';
       n=n/(-2);
    }
   s=s+'1';
 reverse(s.begin(), s.end());
printf("Case #%ld: %s\n",i+1,s.c_str());
}

  
  return EXIT_SUCCESS;
}