#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <fstream.h>
using namespace std;

string s;
int k,l,tap;
int main(int argc, char *argv[])
{
   ifstream cin("input.txt");
  ofstream cout("output.txt");
   while(cin>>s){
       k=1;
       tap=0;
       l=s.size();
       while(k<=l/2){
           tap=0;
           if(l%k==0)
           for(int i=0;i<k;i++){
               for(int j=k+i;j<l;j+=k)
                   if(s[i]!=s[j]){
                       k=j;
                       tap=1;
                       i=-1;
                       break;
                   }
                   if(tap)break;

           }
           if(tap==0 && l%k==0)break;
           k++;

       }
       if(k>l/2)k=l;
       cout<<l/k<<endl;
   }
    cin.close();
  cout.close();
   
   return EXIT_SUCCESS;
} 