#include <cstdlib>
#include <iostream>
#include <algorithm>
#define MAX 100001
using namespace std;

int main(int argc, char *argv[])
{
   int n;
       cin >> n; 
   int a[MAX];
       for(int i = 0; i < n; i++)
           cin >> a[i];
   sort(a,a+n);
   int j;
   for(j = 0;  j < n; j++){
       if(a[j] != j)
           break;
   }
   cout << j << endl;
   
   
   return EXIT_SUCCESS;
}