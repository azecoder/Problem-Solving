#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int n;
     cin>>n;
   int i, a[1001];
     for(i=0; i<n; i++)
        cin>>a[i];
   int j,c;
     for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
           {
              if(a[j]>a[j+1])
                 {
                    c=a[j];
                    a[j]=a[j+1];
                    a[j+1]=c;
                 }
           }
     for(i=0; i<n-1; i++)
        cout<<a[i]<<" ";   cout<<a[n-1];

   cout<<endl;

   
   return EXIT_SUCCESS;
}