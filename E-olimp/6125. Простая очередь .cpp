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

int pop(int que[])
{
 x=que[0];
 for(i=0; i<j; i++)
   que[i]=que[i+1];
 j--;
 return x;
}

int size()
{
 return j+1;
}

void clear()
{
 j=-1;
}

int front(int n, int que[])
{
return que[0];
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
             cout<<pop(que)<<endl;
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
             cout<<front(n,que)<<endl;
         }
  }

  return EXIT_SUCCESS;
}