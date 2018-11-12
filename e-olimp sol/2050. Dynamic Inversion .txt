#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;
long long n,m,a[2000001],b[2000001],a1[2000001],b1[2000001],d[2000001],p,c,o,s=0,l=0,o1=0,z=0;
int goandcheck(int x){
   int u=0;
   for(int i=0;i<d[x];i++)
       if(a[i]>a[d[x]]){b1[a[i]-1]-=1;
           u++;}
           return u;
   }
void quicksort(int lo, int hi){
   int r;
   r=a1[(lo+hi)/2];
   int i,j;
   i=lo; j=hi;
   do{

       while(a1[i]<r) i++;
       while(a1[j]>r) j--;
       if(i<=j)
       {
           int x;
           x=a1[i]; a1[i]=a1[j]; a1[j]=x; x=b1[i]; b1[i]=b1[j]; b1[j]=x;
           x=d[i]; d[i]=d[j];d[j]=x; i++;j--;}

   }while(i<=j);
   if(lo<j)quicksort(lo,j);
   if(hi>i)    quicksort(i, hi);
}

int main(int argc, char *argv[])
{
  cin>>n>>c;
   while(!cin.eof()){


   for(int i=0;i<n;i++){
       cin>>a[i];
       a1[i]=a[i];
       d[i]=i;}

        if(n==1)
           b[n-1]=1;

           if(n==2 && a[0]==2){b[0]=1;b[1]=0;}
            if(n==2 && a[1]==2){b[0]=0;b[1]=0;}
       for(int i=n-3;i>=0;i--){
           if(n>1)
           b[n-1]=0;

           p=0;
           if(n>1)
           if(a[n-2]>a[n-1])b[n-2]=1;else b[n-2]=0;

           if(a[i]-a[i+1]==1)
               b[i]=b[i+1]+1;

           if(a[i]-a[i+1]==-1)
               b[i]=b[i+1];

           if(a[i]-a[i+1]>1 || a[i]-a[i+1]<-1  ){
               long j=i;
               p=0;
               while((j+1)<n && a[i]-a[++j]!=1 && a[i]-a[j]!=-1  ){if(a[i]>a[j])p++;}
               if(a[i]-a[j]==1){ b[i]=p+b[j]+1; }
               if(a[i]-a[j]==-1) b[i]=p+b[j];
               if(j>=n-1 && a[i]-a[j]!=1){ b[i]=p;}
        }

       }
        for(int i=0;i<n;i++)
           b1[i]=b[i];
           quicksort(0,n-1);

           s=0;
        for(int i=0;i<n;i++)
           s+=b[i];
       l=0;
        for(int i=0;i<c;i++){
           cin>>m;

           cout<<s-l<<endl;
          l+=b1[m-1];
          l+=goandcheck(m-1);
           a[d[m-1]]=-1;
       }
     cin>>n>>c;
   }

   return 0;
}