#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
char b[1000],s[1000];
int i,j,h,l,l1=0,p=0,m,n;
  cin.getline(s,101);
  j=0;
  m=0;
  n=strlen(s);;
for(i=0;i<n;i++){
if(isalnum(s[i]) || (!isalnum(s[i]) && isalnum(s[i+1])&& s[i]!=' ' && s[i]!='\0')) {
      b[j++]=s[i];
  }
      else {
      b[j]='\0';
     
     if(j!=0){
      l1++;
  }
      l=0;
     for(h=0;h<=j/2;h++){
          if(toupper(b[h])!=toupper(b[j-1-h])){
              l=1;
          }
      }
    
      if(l!=1){
          if(j>m){
          m=j;
          p=l1;
      }}

      l=0;
      j=0;

  }
  if(isalnum(s[i]) && s[i+1]=='\0')
  {  b[j]='\0';
     if(j!=0){
      l1++;
  }
      l=0;
     for(h=0;h<=j/2;h++){
          if(toupper(b[h])!=toupper(b[j-1-h])){
              l=1;
          }
      }
      if(l!=1){
          if(j>m){
          m=j;
          p=l1;
      }}

      l=0;
      j=0;

  }
}

cout<<p<<endl;

   return EXIT_SUCCESS;
}