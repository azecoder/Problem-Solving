#include <cstdlib>
#include <iostream>

using namespace std;
void qs(long l,long r);
void yd(long i,long j);
long a[1000000],min,s[1000001],i,j,k,l,m,n;
int main(int argc, char *argv[])
{cin>>n;
for(i=1;i<=n;i++)
cin>>s[i];
qs(1,n);
k=0; j=0;
for(i=1;i<n;i++)
{if((s[i+1]-s[i])!=1 && (s[i+1]-s[i])!=0 )
{k=1; a[j]=s[i]+1;
j++;
}}
//cout<<s[n]<<endl;
l=j;
if(k==0 && s[n]!=n)
{cout<<s[n]+1<<endl;
}
else if(k==0 && s[n]==n)
cout<<"0"<<endl;
else
{m=a[0];
for(i=1;i<l;i++)
{if(a[i]<m)
m=a[i];
}
cout<<m<<endl;
}

  return EXIT_SUCCESS;
}
void qs(long l,long r)
{if(l>=r)
return;

yd((l+r)/2,r);
long j=l-1;
for(i=l;i<r;i++)
if(s[i]<s[r])
{j++;
yd(i,j);
}

yd(j+1,r);
if(l<j) qs(l,j);
if(j+2<r) qs(j+2,r);
}

void yd(long i,long j)
{long temp=s[i];
s[i]=s[j];
s[j]=temp;
}