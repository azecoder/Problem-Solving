#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  char a[101];
  int i,x,y,boyuk=0,kicik=0,pul1,pul2;
  
  cin>>a>>x>>y;
  
  for(i=0; i<strlen(a); i++)
  {
      if(a[i]>=65 && a[i]<=90)       boyuk++;
      if(a[i]>=97 && a[i]<=122)       kicik++;
  }
  
  pul1=kicik*x;
  pul2=boyuk*y;
  
  if(pul1>=pul2)      cout<<pul2<<endl;
  else                cout<<pul1<<endl;
      
        
  return EXIT_SUCCESS;
}