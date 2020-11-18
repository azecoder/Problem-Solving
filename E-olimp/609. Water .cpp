#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
#define size 100001

int n,k;
int i,l,a[size];
int j,c;
int say;

int main(int argc, char *argv[])
{
  cin>>n>>k;

  l=0;
  for(i=0; i<n; i++){
      cin>>a[i];
      if(a[i]>k) l=1;
      }

  if(l)   cout<<"Impossible"<<endl;
  else
      {

          sort(a,a+n);

          j=n-1;
          i=0;
          say=0;
          while(1){
                      if((a[i]+a[j])<=k){
                          if(i==j || j==i+1) { say++; break; }
                          i++;
                          j--;
                          say++;
                          }

                      else if((a[i]+a[j])>k){
                          if(j==i || j==i+1) { say+=2; break; }
                          j--;
                          say++;
                          }


                  }
          cout<<say<<endl;
      }



   
   return EXIT_SUCCESS;
}