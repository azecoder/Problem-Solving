#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int x,que[101],j=-1,i,n,m,a;


void push(int n, int que[])
{
 j++;
 que[j]=n;
}

void pop(int que[])
{
 if(j==-1)
    cout<<"error"<<endl;
 else
 {
    x=que[0];
    for(i=0; i<j; i++)
    que[i]=que[i+1];
    j--;
    cout<<x<<endl;
  }
}

int size()
{
 return j+1;
}

void clear()
{
 j=-1;
}

void front(int n, int que[])
{
if(j==-1)
  cout<<"error"<<endl;
else
  cout<<que[0]<<endl;
}



int main(int argc, char *argv[])
{
  string s;
  while(1)
  {
       cin>>s;
       if(s=="push")
         {
            cin>>n;
            push(n,que);
            cout<<"ok"<<endl;
         }
       else if(s=="exit")
         {
             cout<<"bye"<<endl;
             break;
         }
       else if(s=="pop")
         {
            pop(que);
         }
       else if(s=="clear")
         {
             clear();
             cout<<"ok"<<endl;
         }
       else if(s=="size")
         {
             cout<<size()<<endl;
         }
       else if(s=="front")
         {
             front(n,que);
         }
  }

  return EXIT_SUCCESS;
}