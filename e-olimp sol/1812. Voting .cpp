#include <iostream.h>

using namespace std;

int main()
{
char a[70];
int n, s1, s2, s3, i, k;
while(gets(a))  
{
  s1 = 0; s2 = 0; s3 = 0;               
  if( a[0] == '#' )  break;               
  n = strlen(a);
  if( n % 2 == 0 )  k = n;
  else  k = n + 1;
  for( i = 0; i < n; i ++ )  if( a[i] == 'A')  s1 ++;
  for( i = 0; i < n; i ++ )  if( a[i] == 'Y')  s2 ++;
  for( i = 0; i < n; i ++ )  if( a[i] == 'N')  s3 ++;
  if( s1 >= k / 2)   cout<<"need quorum"<<endl;
  else
  {
    if( s2 == s3 )   cout<<"tie"<<endl;
    if( s2 > s3 )    cout<<"yes"<<endl;
    if( s2 < s3 )    cout<<"no"<<endl;
   } 
 }                             

return 0;
}