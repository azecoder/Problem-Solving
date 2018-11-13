#include <cstdlib>
#include <iostream>

#define MAX 50000
using namespace std;

int main(int argc, char *argv[])
{
  int i,j,l=0,w=0,a[MAX];
   int n, k;
       cin >> n >> k;
   
   
   for(i = 1; i <= n; i++)
        a[i] = i;

   for(j = 1; j <= MAX; j++)
   {
       for(i = 1; i <= n; i++)
       {
           if(a[i] != 0)
              w++;

           if(w == k)
           {
               a[i] = 0;
               w = 0;
               l++;
           }

           if(l == n-1)
           {
               for(i = 1; i <= n; i++)
               {    
                   if(a[i] != 0)
                   {
                       cout << i << endl;
                       goto end;                  
                   }
               }       
           }
       }
   }
end:
   
  
  return EXIT_SUCCESS;
}