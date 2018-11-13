#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main ()
{
   int testCase; scanf ("%d", &testCase);
   int cases = 0;
   getchar ();
   int freq [26 + 3];

   while ( testCase-- ) {
       char a [100], b [100];
       gets (a);
       gets (b);

       memset (freq, 0, sizeof freq);

       for ( int i = 0; a [i]; i++ ) freq [a [i] - 'a']++;
       for ( int i = 0; b [i]; i++ ) freq [b [i] - 'a']--;

       int cnt = 0;
       for ( int i = 0; i < 26; i++ ) cnt += abs (freq [i]);

       printf ("Case #%d:  %d\n", ++cases, cnt);
   }

   return 0;
}