#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

int lt(char a,char b) {
   if(toupper(a) != toupper(b)) { return (toupper(a) < toupper(b)); }
   return(a < b);
}

char s[256];
int n, i, len;

int main(int argc, char *argv[])
{
   cin>>n;
   for(i = 1; i<= n; i++){
       cin >> s;
       len = strlen(s);
       sort(s, s + len, lt);
       do{
           cout << s << endl;
       } while(next_permutation(s, s + len, lt)); }

     return 0;
} 