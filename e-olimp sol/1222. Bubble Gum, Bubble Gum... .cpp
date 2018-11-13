#include <cstdio>
#include <cstdlib>
#include <map>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

map <string, int> pos;
map <int, string> nome;
int ini, n, a;

char temp [10000];

void read () {
   string no;
   gets (temp);
   
   istringstream in (temp);
   
   int p = 0;
   while (in >> no) {
         pos [no] = p;
         nome[p] = no;
         p++;
   }
   
   n = p;
   scanf ("%s", temp);
   ini = pos [string(temp)];
   scanf ("%d", &a);
  gets (temp);
   
   cout << nome[(ini+a-1)%n] << endl;
}

int main () {
  int tests;
  scanf ("%d", &tests);
  gets (temp);
  while (tests--) {
      read();
  }
  
  return 0;
}