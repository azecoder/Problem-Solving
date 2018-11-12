#include <cstdlib>
#include <iostream>

using namespace std;

int a[111],b[111];

int main(int argc, char *argv[])
{
 int i, j, temp, n;
 cin >> n;
 for( i = 1; i <= n; i ++ )
 {
     cin >> a[i];
     b[i] = i;
 }
 
 for(i = 1; i <= n; i ++ )
 for(j = 1; j < n; j ++)
 if(a[j] < a[j+1])
 {
     temp = a[j];
     a[j] = a[j+1];
     a[j+1] = temp;
     
     temp = b[j];
     b[j] = b[j+1];
     b[j+1] = temp;
 }
 
 for( i = 1; i < n; i ++) cout << b[i] << " ";
 cout << b[j] << endl;
   

 return EXIT_SUCCESS;
}