#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define size 101
#define ll long long

int main(int argc, char *argv[])
{
  ll n,i;
  char a[size];

  cin>>n;

  itoa(n,a,13);
  for(i=0; i<strlen(a); i++)   if(a[i]>=97 && a[i]<=122)   a[i]=a[i]-32;

  cout<<a<<endl;

  return EXIT_SUCCESS;
}