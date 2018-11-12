#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv) 
{
   string a;    cin >> a;
   string b;    cin >> b;
   cout << a.find(b)+1 << endl;
   
   return 0;
}