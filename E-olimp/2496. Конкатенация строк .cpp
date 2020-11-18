#include <cstdlib>
#include <iostream>

using namespace std;
struct {
  char a[201];
  int len;
}t[100];
int main(int argc, char *argv[])
{
  char b[201],c[201];
  int p,h,l=0,l1;
  cin.getline(b,201,'\n');
  h=strlen(b);
  p=0;
  for(int i=0;i<h;i++){
      if(b[i]!=')' && b[i]!='(')
          c[l++]=b[i];
      if(b[i]=='('){
          l1=0;
          c[l++]=(p++)+48;
          while(b[++i]!=')')
              t[p-1].a[l1++]=b[i];
              t[p-1].len=l1;
      }
  }
  for(int i=0;i<l;i++)
      if(isupper(c[i]) || islower(c[i]))
          cout<<c[i];
          else
          for(int j=t[c[i]-48].len-1;j>=0;j--)
              cout<<t[c[i]-48].a[j];
              cout<<endl;
 
  return EXIT_SUCCESS;
} 