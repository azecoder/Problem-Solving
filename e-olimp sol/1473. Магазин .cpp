#include <cstdlib>
#include <iostream>

int A[4];

using namespace std;

int main(int argc, char *argv[])
{
int i;
for(i=1 ; i<=3; i++)
   cin>>A[i];

int j ;
int temp;
for( j = 1 ;j < 3; j++ )
   {
     for( i = 1 ;i < 3; i++ )
       if(A[i] > A[i+1])
         {
           temp = A[i];
           A[i] = A[i+1];
           A[i+1] = temp;
         }
   }

 cout<<A[2]+A[3]<<endl;

  return EXIT_SUCCESS;
}