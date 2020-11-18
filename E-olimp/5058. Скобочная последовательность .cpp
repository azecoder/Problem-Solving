#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
  stack <char> s;
  string a;
  char x[8]={'(',')','[',']','{','}'};
  long i,flag=0,cnt1=0,cnt2=0;

  cin>>a;

  for(i=0; i<a.size(); i++)
  if(a[i]==x[0] || a[i]==x[2] || a[i]==x[4])
  {
      cnt1++;
      s.push(a[i]);
  }
  else
  {
      cnt2++;

      if(cnt2>cnt1)     break;

      if((a[i]==x[1] && s.top()==x[0]) || (a[i]==x[3] && s.top()==x[2]) || (a[i]==x[5] && s.top()==x[4]))     s.pop();
      else
      {
          flag = 1;
          break;
      }
  }

  if(flag==1 || !s.empty() || cnt1!=cnt2)
      printf("no\n");
  else
      printf("yes\n");

  return EXIT_SUCCESS;
}