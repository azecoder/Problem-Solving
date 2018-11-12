#include <cstdlib>
#include <iostream>
#include <vector>
#include <math.h>

char a[9999];
char b[9999];
char b1[9999];

long long h,s,l,sum,h1,eded,t,m,len,bir, iki,uc,d[1000],k;
using namespace std;
vector<int> q[200];

int sub(char a[], long j){
long long l,sum,s,p=1;
// cout<<j<<endl;
   for(int i=0;i<j/3-1;i++)   p*=10;
 //  cout<<"p"<<p<<endl;

    sum=0;
    for(int i=0;i<j;i+=3){
        s=0;
        s+=(a[i]-48)*100+(a[i+1]-48)*10+(a[i+2]-48);
    //   cout<<q[s][0]<<endl;
        sum+=(q[s][0])*(p);
        p/=10;
    }
    return sum;
}

int main(int argc, char *argv[])
{
q[0].push_back(63);
q[63].push_back(0);
q[1].push_back(10);
q[10].push_back(1);
q[2].push_back(93);
q[93].push_back(2);
q[3].push_back(79);
q[79].push_back(3);
q[4].push_back(106);
q[106].push_back(4);
q[5].push_back(103);
q[103].push_back(5);
q[6].push_back(119);
q[119].push_back(6);
q[7].push_back(11);
q[11].push_back(7);
q[8].push_back(127);
q[127].push_back(8);
q[9].push_back(107);
q[107].push_back(9);

gets(a);
while(a[0]!='B'){
    h=0;h1=0;
    len=strlen(a);
    for(int i=0;a[i]!='+';i++)
        b[h++]=a[i];
    for(int i=h+1;a[i]!='=';i++)
        b1[h1++]=a[i];
    eded=sub(b,h)+sub(b1,h1);
         s=eded;
         l=0;
    while(s){
         d[l++]=s%10;
         s-=d[l-1];
         s/=10;
     }


     for(int i=0;i<len;i++)
         cout<<a[i];
         k=0;
     for(int i=l-1;i>=0;i--){
         if(d[i]!=0)k=1;
         if(k){
             if(q[d[i]][0]<10)
                 cout<<"00"<<q[d[i]][0];
             if(q[d[i]][0]<100 && q[d[i]][0]>9)
                 cout<<0<<q[d[i]][0];
             if(q[d[i]][0]>99)
                 cout<<q[d[i]][0];
             }
     }
     if(eded==0)
         cout<<"059";
     cout<<endl;

     gets(a);
}
  return EXIT_SUCCESS;
} 