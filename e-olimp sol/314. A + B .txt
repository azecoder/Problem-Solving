#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{char x[1000000],h[100000],a[100000],b[100000],c[100000],d[100000],v[100000];
long pl,mn,u,e,g,p,z,f,i,k,n,l=0,j,m,s,w;
scanf("%ld\n",&g);
for(e=0;e<g;e++)
{gets(h);
u=strlen(h);
pl=0; mn=0;
  for(i=0;i<u;i++){
      if(h[i]=='+'){
          pl=1;
          break;
      }
      if(h[i]=='-'){
          mn=1;
          break;
      }
  }
if(pl==1){
  j=0;
  for(i=0;i<u;i++)
      {if(h[i]=='+')
          {break;
      }
       else
          {a[j]=h[i];
          j++;
      }
   }
  n=j;
  j=0;
  for(i=n-1;i>=0;i--)
      {d[j]=a[i];
      j++;
  }
  j=0;
  for(i=n+1;i<u;i++)
      {b[j]=h[i];
      j++;
  }
  m=j;
  j=0;
  for(i=m-1;i>=0;i--)
      {v[j]=b[i];
      j++;
  }
//**********************************************************
  if(m>n)
  {for(i=n;i<m;i++)
  {d[i]='0';
  }
  l=m;
  }

  if(m<n)
  {for(i=m;i<n;i++)
  {v[i]='0';
  }
  l=n;
  }
  if(n==m)
  {l=n;
  }

//********************************************************************
 k=0; j=0;
  for(i=0;i<l;i++)
      {f=d[i]-48;
      z=v[i]-48;
      p=f+z+k;
if(p>=10)
{
p=p-10;
c[j]=p+48;
k=1;
}
else
{c[j]=p+48;
k=0;
}
j++;
}
s=j;
if(k==1)
{c[s]='1';
for(i=s;i>0;i--)
{cout<<c[i];
} cout<<c[0]<<endl;
}
if(k==0)
{
for(i=s-1;i>0;i--)
{cout<<c[i];
}
cout<<c[0]<<endl;
}
}



//**********************************
//***************************************

if(mn==1){
j=0;
for(i=0;i<u;i++){

  if(h[i]=='-'){
      break;
  }
   else
      {a[j]=h[i];
       j++;
      }
    }
   n=j;
    j=0;
  for(i=n-1;i>=0;i--)
      {d[j]=a[i];
      j++;
  }
    j=0;
  for(i=n+1;i<u;i++)
      {b[j]=h[i];
      j++;
  }
  m=j;
  j=0;
  for(i=m-1;i>=0;i--)
      {v[j]=b[i];
      j++;
  }


//**********************************************************
if(m>n)
{for(i=n;i<m;i++)
{d[i]='0';
}
l=m;
}
if(m<n)
{for(i=m;i<n;i++)
{v[i]='0';
}
l=n;
}
if(n==m)
{l=n;
}
//***********************************************************
j=0; k=0;
for(i=0;i<l;i++)
{f=d[i]-v[i];
if(f>=0)
{c[j]=f+48;
}
if(f<0)
{c[j]=(d[i]+10)-v[i]+48;
d[i+1]=d[i+1]-1;
}
j++;
}
s=j;

j=0;
for(i=s-1;i>=0;i--)
{x[j]=c[i];
j++;
}k=0;
for(j=0;j<s;j++)
{if(x[j]!='0')
{w=j;
k=1;
break;
}
}
if(k==0)
{puts("0");
}
else
{

for(i=w;i<s-1;i++)
{cout<<x[i];
}
cout<<x[s-1]<<endl;
}




}

}

  return EXIT_SUCCESS;
}