#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

map <long long, int> enc;
map <int, long long> decode;
int n;
long long a;
long long b;
long long c;
char temp[10000];
long long permissions [6000];
int marcado [6000];
long long acl;

void read () {
  scanf ("%lld", &a);
  acl = 1;
  n = 1;
  memset (permissions, 0, sizeof (permissions));
  memset (marcado, 0, sizeof (marcado));
  enc.clear();
  decode.clear();
  
  while (a != -1) {
      gets (temp);
      istringstream in (temp);
              
      while (in >> b) {
          if (!enc[b]) {
              enc[b] = n;
              decode[n] = b;
              n++;
          }
          permissions[enc[b]] |= acl;
      }
      acl <<= 1;
      
      scanf ("%lld", &a);
  }
}

void process () {
  long long min;
  char ok = 0;
  pair <int, long long> classes [1000];
  
  /*for (int i = 1; i <= n; i++) 
      printf ("%d => %lld\n", decode[i], permissions[i]);*/
  
  for (int i = 1; i <= n; i++) {
      if (!marcado[i]) {
          marcado[i] = 1;
          min = decode[i];
          for (int j = i+1; j <= n; j++) {
              if (permissions[j] == permissions[i]) {
                  marcado[j] = 1;
                  marcado[i]++;
                  c = decode[j];
                  if (c < min) min = c;
              }
          }
          
          if (marcado[i] > 1) {
              classes[ok++] = make_pair (-marcado[i], min);
          }            
      }
  }
  if (!ok) printf ("no prototypes found\n");
  else {
      sort (classes, classes+ok);
      for (int i = 0; i < ok; i++) {
          printf ("%d %lld\n", -classes[i].first, classes[i].second);    
      }    
  }
}

int main () {
   
  int casos;
  scanf ("%d",&casos);
  int atual = 1;
  while (casos--) {
      read();
      printf ("Case %d\n", atual++);
      process();
  }    
      
  return 0;
}