#include <cstdlib>
#include <iostream>
#include <deque>
using namespace std;

deque <int> d;
string ch;
int k;

int main(int argc, char *argv[])
{
  while(1)
  {
     cin>>ch;
     if(ch=="push_back") 
       {
           cin>>k;
           d.push_back(k);
           cout<<"ok"<<endl;    
       }
       
     else if(ch=="push_front")
       {
           cin>>k;
           d.push_front(k); 
           cout<<"ok"<<endl;   
       }  
     else if(ch=="pop_front")
       {
          if(d.size()==0)
           cout<<"error"<<endl;
          else
           { 
            cout<<d.front()<<endl;
            d.pop_front();
           }    
       }
     else if(ch=="pop_back")
       {
          if(d.size()==0)
           cout<<"error"<<endl;
          else
           {    
             cout<<d.back()<<endl;
             d.pop_back();
           }    
       }   
     else if(ch=="front")
       {
          if(d.size()==0)
           cout<<"error"<<endl;
          else   
           cout<<d.front()<<endl;
       }
     else if(ch=="back")
       {
          if(d.size()==0)
           cout<<"error"<<endl;
          else    
           cout<<d.back()<<endl;
       }
     else if(ch=="clear")
       {
          d.clear(); 
          cout<<"ok"<<endl;
       }   
     else if(ch=="size")        
          cout<<d.size()<<endl;
     else
       {
          cout<<"bye"<<endl;
          break;    
       }       
       
  }
  
  return EXIT_SUCCESS;
}