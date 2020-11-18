#include <cstdlib>
#include <iostream>
#include <set>
#include <stdio.h>
using namespace std;
 long n,a,b,c,l,f;
 long  v[10000001];

int main(int argc, char *argv[])
{
  set<long> s;
  set<long>::iterator it;
 long lo=0,hi=-1;

scanf("%ld",&n);
 l=0;
 while(n){
     if(n==1){
         scanf("%ld%ld",&a,&b);
     v[b]=a;
         s.insert(b);


     }
     if(n==2){
         if(!s.empty()){

             it=s.end();
             it--;
             f=*it;

             printf("%ld\n",v[f]);}
             else
             printf("0\n");
             if(!s.empty())
                 s.erase(it);
     }
     if(n==3){
         if(!s.empty()){
             it=s.begin();
             f=*it;

               printf("%ld\n",v[f]);}
             else
               printf("0\n");
             if(!s.empty())
                 s.erase(it);
     }

       scanf("%ld",&n);
 }


  return EXIT_SUCCESS;
}