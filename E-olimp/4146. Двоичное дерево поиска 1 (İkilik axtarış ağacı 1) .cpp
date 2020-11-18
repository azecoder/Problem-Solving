#include <iostream>
#include <set>

using namespace std;

set<int> g;
int n;
string s;

int main()
{

  while (cin >> s >> n) {
      if (s.compare("insert") == 0) {
          g.insert(n);
      }
      else if (s.compare("delete") == 0)
          g.erase(n);
      else {
          if (g.find(n) != g.end())
              cout << "true" << endl;
          else
              cout << "false" << endl;
      }
  }
  return 0;
}