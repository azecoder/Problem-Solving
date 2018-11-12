#include <iostream>
#include <cstring>
using namespace std;

#define ll long long
#define MAX 100000001

char a[MAX];
ll i,n,mem;

int main(int argc, char *argv[])
{
 cin >> a;
 n = strlen(a);
 
 if(n == 1 && a[0] == '0')
 {
     cout << "-1" << endl;
     return 0;
 }
 
 if(n == 1 && a[0] == '1')
 {
     cout << "0" << endl;
     return 0;
 }
 
 if(a[n-1] != '0')
 a[n-1] -= 1;
 
 else
 {
     if(a[n-2] != '0')
     {
         a[n-1] = '9';
         a[n-2] -= 1;
     }
     
     else
     {
         for(i = n-1; i >= 0; i --)
             if(a[i] == '0')
                a[i] = '9';
         else
         {
             mem = i;  
             break;
         }
         
         a[mem] -= 1;
     }
 }
 
 
 if(a[0] == '0')
 {
     for(i=0; i<n; i++)
         a[i]=a[i+1];
 }
 
 cout<<a<<endl;
 
 
 
 return 0;
}