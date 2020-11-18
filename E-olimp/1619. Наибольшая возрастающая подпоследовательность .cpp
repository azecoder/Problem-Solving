#include <iostream>

using namespace std;
#define size 1001
int main(int argc, char *argv[])
{
 int list[size],a[size],i,j,max_id=1,n;

 cin>>n;
 for(i=1; i<=n; i++)  cin>>a[i];

 for(i=1; i<=n; i++)  list[i]=1;

 for(i=1; i<=n; i++)
     for(j=1; j<i; j++)   if(a[i]>a[j])                list[i]=max(list[j]+1,list[i]);
     
 for(i=1; i<=n; i++)      if(list[i]>list[max_id])       max_id=i;

 cout<<list[max_id]<<endl;
 
 return 0;
}