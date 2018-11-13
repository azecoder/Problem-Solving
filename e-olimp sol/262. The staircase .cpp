#include <cstdlib>
#include <iostream>

using namespace std;
long a[10000],i,j,k,b[10000],l,m,n;
int main(int argc, char *argv[])
{cin>>n;
for(i=0;i<n;i++)
  cin>>b[i];
cin>>k;
j=0;
for(i=k;i<n+k;i++){
  a[i]=b[j];
  j++;
}

for(i=k;i<k+n+1;i++){
  m=a[i-k];
  for(j=i-k+1;j<i;j++)
      if(m<=a[j])
          m=a[j];
  a[i]+=m;
}
cout<<a[k+n]<<endl;

  
  return EXIT_SUCCESS;
}