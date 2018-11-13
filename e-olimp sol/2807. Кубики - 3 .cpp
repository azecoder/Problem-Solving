#include <cstdlib>
#include <iostream>

using namespace std;
char s[100001];
int n,i,j,k=0,b[190];
int main(int argc, char *argv[])
{   
   cin>>n>>s;
      if(n%2==0)    cout<<"Ok"<<endl;
   else 
   {
          for(i=0;i<n;i++)    b[(int) s[i]]++;
          for(i=65;i<=122;i++)
              if(b[i]%2!=0)
           {    
               k=1;    break;
           }
          cout<<(char)(i)<<endl;
          if(k==0)   cout<<"Ok"<<endl;
   }
      
  return EXIT_SUCCESS;
}