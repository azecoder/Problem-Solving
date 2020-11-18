#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 int a[] = {1,2,3,4,5,6,7,8,9};
 int i,n,say=0;

 cin>>n;
 do
 {
     {
         for (i=0; i<n-1; i++)    cout<<a[i]<<" ";
         cout<<a[n-1]<<endl;
     }
 } while(next_permutation(a,a+n));


 return EXIT_SUCCESS;
}