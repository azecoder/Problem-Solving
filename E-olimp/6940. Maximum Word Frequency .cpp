#include <iostream>
#include <algorithm>

using namespace std;
#define size 1000
string a[size],c;
int i,cnt=1,maxx;

int main()
{
   int n;
      cin >> n;
   for(i = 0; i < n; i ++)    cin >> a[i];

   sort(a, a+n);
   for(i = 0; i < n; i ++)
       if(a[i].compare(a[i+1]) == 0) cnt++;
       else
       {
           if(cnt >= maxx)
           {
               maxx = cnt;
               c = a[i];
           }
           cnt = 1;
       }
   cout << c << " " << maxx << endl;

   return 0;
}