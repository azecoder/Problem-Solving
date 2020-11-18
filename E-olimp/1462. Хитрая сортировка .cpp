#include <cstdlib>
#include <iostream>

#define MAX 101
using namespace std;

int a[MAX];
int main(int argc, char *argv[])
{
   int n;
       cin >> n;
   
       for(int i = 0; i < n; i++)
           cin >> a[i];
       int c;
       for(int i = 0; i < n-1; i++)
       {
           for(int j = 0;  j < n-1; j++)
           {
               if(a[j]%10 > a[j+1]%10)
               {
                   c = a[j];
                   a[j] = a[j+1];
                   a[j+1] = c;
               }
               else if(a[j]%10 == a[j+1]%10)
               {
                   if(a[j] > a[j+1])
                   {  
                       c = a[j];
                       a[j] = a[j+1];
                       a[j+1] = c;
                   }
               }
           }
       }
       for(int i = 0; i < n-1; i++)
           cout << a[i] << " ";
       cout << a[n-1] << endl;

   
   return EXIT_SUCCESS;
}