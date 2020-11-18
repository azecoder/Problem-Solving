#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

std :: stack <int> stak;

string a;
int n;

int main(int argc, char *argv[])
{
   while(true){
       
       cin >> a;
       
       if(a.compare("push") == 0){
           cin >> n;
           stak.push(n);
           cout << "ok" << endl;
           }
       else
       if(a.compare("pop") == 0){
           if(stak.empty())
               cout << "error" << endl;
           else{
               cout << stak.top() << endl;
               stak.pop();
               }
           }
       else
       if(a.compare("back") == 0){
           if(stak.empty())
               cout << "error" << endl;
           else
               cout << stak.top() << endl;
           }                   
       else
       if(a.compare("clear") == 0){
           while(!stak.empty())
               stak.pop();
           cout << "ok" << endl;
           }        
       else
       if(a.compare("size") == 0){
           cout << stak.size() << endl;
           }        
       else
       if(a.compare("exit") == 0){
           cout << "bye" << endl;
           break;
           }        
       }
   
   
   return EXIT_SUCCESS;
}