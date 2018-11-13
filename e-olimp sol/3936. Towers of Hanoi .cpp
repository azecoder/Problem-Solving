#include <iostream>
#include <cstdlib>
#include <stack>


/*  < author: Tabriz Hajiyev >  */

using namespace::std;
   stack <int> t1, t2, t3;

void dput(stack<int> *source, stack<int> *dest)
{
   stack<int> &ts = *source, &tb = *dest;
   if (tb.empty() || tb.top() > ts.top())
   {    
       if(&ts == &t1)          cout << 1 << " ";
       else if(&ts == &t2)     cout << 2 << " ";
       else if(&ts == &t3)     cout << 3 << " ";
       
       if(&tb == &t1)          cout << 1 << endl;
       else if(&tb == &t2)     cout << 2 << endl;
       else if(&tb == &t3)     cout << 3 << endl;
 
       tb.push(ts.top());
       ts.pop();
   }
}

void hanoi(int disk, stack<int> *source, stack<int> *dest, stack<int> *spare)
{
   stack<int> &ts = *source, &tb = *dest, &tm = *spare;
   if (disk == 1)    dput(&ts, &tb);
   else
   {
       hanoi(disk - 1, &ts, &tm, &tb);
       dput(&ts, &tb);
       hanoi(disk - 1, &tm, &tb, &ts);
   }
}

int main() {
   
   int cnt;
       cin >> cnt; cin.ignore();
   
   for (int i = cnt; i >= 1; i--)
       t1.push(i);
   
   hanoi(cnt, &t1, &t2, &t3);
   
   
   return 0;
} 