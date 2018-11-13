#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

  int n,i,j,k=0,l;

  cin>>n;

  for(i=0; i<n; i=i+2)
    {
       k++;
       cout<<k;

              for(j=1; j<n; j++)
                 {
                     k++;
                     cout<<" "<<k;
                 }

         cout<<endl;

        if(k<n*n)
        {
            k=k+n;
            l=k;
            cout<<l;

                for(j=1; j<n; j++)
                 {
                     l--;
                     cout<<" "<<l;
                 }

            cout<<endl;
        }

    }


  return EXIT_SUCCESS;
}