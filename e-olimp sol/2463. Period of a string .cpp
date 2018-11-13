#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

string s;
int k,l,tap;
int main(int argc, char *argv[])
{

cin>>s;
      k=1;
      tap=0;
      l=s.size();
      while(k<=l/2){
          tap=0;
          if(l%k==0)
          for(int i=0;i<k;i++){
              for(int j=k+i;j<l;j+=k)
                  if(s[i]!=s[j]){
              //        cout<<s[i]<<" "<<s[j]<<" "<<i<<" "<<j<<" "<<k<<endl;
                      k=j;
                      tap=1;
                      i=-1;
                      break;
                  }
                  if(tap)break;

          }
          if(tap==0 && l%k==0)break;
          k++;

      }
      if(k>l/2)k=l;
      cout<<k<<endl;



 
   return EXIT_SUCCESS;
} 