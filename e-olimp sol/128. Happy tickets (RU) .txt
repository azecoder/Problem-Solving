#include <cstdlib>
#include <iostream>

using namespace std;

int i,j,k,n,c;

int main(int argc, char *argv[])
{

   cin>>n;

  for(i=0; i<10; i++)
     for(j=0; j<10; j++)
        for(k=0; k<10; k++){
             if(i+k+j==n)
                c++;
           }

   cout<<c*c<<endl;

return EXIT_SUCCESS;
}