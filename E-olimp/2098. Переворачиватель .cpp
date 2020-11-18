#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   long long a[101], i, n;
      cin >> n;
   for(i = 1; i <= n; i ++) cin >> a[i];

   for(i = n; i > 1; i --) cout << a[i] << " ";
   cout << a[1] << endl;

   return EXIT_SUCCESS;
}