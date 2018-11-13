#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int a[5],i,say=0,j,temp;
  
  for(i=1; i<=4; i++)
     cin>>a[i];
  
  for(i=1; i<4; i++)
     for(j=1; j<4; j++)
        if(a[j]>a[j+1])
        {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
  
  for(i=1; i<=4; i++)
     if(a[i]!=0 && a[i]==a[i+1])   say++;
  
  cout<<say<<endl;       

  return EXIT_SUCCESS;
}