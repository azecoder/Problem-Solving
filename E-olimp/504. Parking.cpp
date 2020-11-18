#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
char a[1000];
int n,i,k,h,j;
cin>>n;
k=0;
for(i=0;i<n;i++){
      cin>>a;
      h=strlen(a);
      for(j=0;j<h;j++){
          if(a[j]=='-' && a[j+1]!='S'
          && a[j+1]!='B'&& a[j+2]!='B'&& a[j-1]!='S'
          )
          k++;
      }
      cout<<k<<"\n";
      k=0;
      h=0;
  }

  return EXIT_SUCCESS;
}