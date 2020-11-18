#include <cstdlib>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
   set <int> s;
   set <int>:: iterator it;
   vector <int> v;
   vector <int> ::iterator its;
   long n,a[1000],l=0,i,h;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
       s.insert(a[i]);
       v.push_back(a[i]);
   }
   while(!s.empty()){
       it=s.begin();
       s.erase(*it);
       its=find(v.begin(), v.end(), *it);
       i=its-v.begin();
       for(int j=i+1;j<n;j++)

           if(a[i]>a[j]){
               v.clear();
               h=a[i];
               l++;
           for(int j=0;j<i;j++)
               v.push_back(a[j]);
           for(int j=i;j<n-1;j++){
               v.push_back(a[j+1]);
               a[j]=a[j+1];
           }
               v.push_back(h);
               a[n-1]=h;
               break;
           }
   }
   cout<<l<<endl;


   return EXIT_SUCCESS;
} 