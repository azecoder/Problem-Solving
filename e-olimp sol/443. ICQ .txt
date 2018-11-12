#include <cstdlib>
#include <iostream>

using namespace std;
class add{
   public:
       char name[1000];
   };
   add t[100],m;
int main(int argc, char *argv[])
{
   int n,k,a[1000],i,c,j,x;

   char d;

   cin>>n>>k;
   for(i=0;i<n;i++){
   cin>>t[i].name>>a[i];

}
   for(j=0;j<n-1;j++){
   for(i=0;i<n-1;i++){
   if(a[i]>a[i+1] ){
   m=t[i+1];
   t[i+1]=t[i];
 t[i]=m;
 c=a[i+1];
   a[i+1]=a[i];
   a[i]=c;
}}}
for(j=0;j<k-1;j++){
for(i=0;i<k-1;i++){

   x = strcmp(t[i].name,t[i+1].name);

if(x>0){
 m=t[i+1];
   t[i+1]=t[i];
 t[i]=m;
 c=a[i+1];
   a[i+1]=a[i];
   a[i]=c;
}}

}



   for(i=0;i<k;i++)
   cout<<t[i].name<<"\n";



   
   return EXIT_SUCCESS;
}