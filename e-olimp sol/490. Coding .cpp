#include <cstdlib>
#include <iostream>

using namespace std;
long i,j,k,l,m,n;
char s[10000];
int main(int argc, char *argv[])
{gets(s);
n=strlen(s);
if(s[0]=='0')
  cout<<"0";

else
  cout<<"1";
for(i=1;i<n;i++){
  if(s[i]!=s[i-1]){
      cout<<"1";
  }
  else
  cout<<"0";
}
cout<<endl;

  return EXIT_SUCCESS;
}