#include <cstdlib>
#include <iostream>
#include <queue>


using namespace std;

std::queue <int> s;
int x;
string a;

int main(int argc, char *argv[])
{
do
{
   cin>>a;
   if(a.compare("push")==0){
       cin>>x;
       s.push(x);
       cout<<"ok"<<endl;
   }
   else if(a.compare("front")==0){
        if(!s.empty())
              cout<<s.front()<<endl;
        else
              cout<<"error"<<endl;
   }
   else if(a.compare("pop")==0){
        if(!s.empty()){
              cout<<s.front();
              s.pop();
              cout<<endl;
              }
        else
              cout<<"error"<<endl;
   }
   else if(a.compare("clear")==0){ 
       while (!s.empty())  s.pop();
       
       cout<<"ok"<<endl;
   }
   else if(a.compare("size")==0)
      cout<<s.size()<<endl;
   else if(a.compare("exit")==0){   
       cout<<"bye"<<endl;
       break;
   }
}while(1);

  return EXIT_SUCCESS;
}