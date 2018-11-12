#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
  char s[11],m[11];
  int n,l;
  while(cin>>s>>n){
      l = strlen (s);  
      long t,factorial=1;
      for(t = 2; t <= l; t++)
          factorial *=t;
          if(n>factorial){
          
          cout<<s;
          cout<<" "<<n<<" = "<<"No permutation"<<endl;
      }else{            
          cout<<s;
          int i = 0,k=0;
          do{i++;
          if(i==n){
              cout<<" "<<n<<" = "<<s<<endl;
              k=1;
              break; 
          }
      }while(next_permutation(s,s+l));
      }
   }    
  
  return EXIT_SUCCESS;
}