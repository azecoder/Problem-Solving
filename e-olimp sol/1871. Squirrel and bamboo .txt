#include <cstdlib>
#include <iostream>
#include <stack>
#include <set>


using namespace std;
stack <long> s;
multiset <long> q;
multiset <long> ::iterator its;

long a,m,i,n;
int main(int argc, char *argv[])
{
  cin>>n;


  for(i=0;i<n;i++){
     cin>>a;
     if(a==0){
          if(!s.empty()){
              q.erase(q.find(s.top()));
              s.pop();
              its=q.end();
              its--;
             
           
          }
         
          cout<<*its<<endl;
          }
      else  {
      s.push(a);
      q.insert(a);
      }
}
      return EXIT_SUCCESS;
} 