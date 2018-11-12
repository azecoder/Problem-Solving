#include <cstdlib>
#include <iostream>

using namespace std;

long long n,left1,right1,s;
struct name{
   long long l,r;
}t[15010],x;
void quicksort(int lo, int hi){
   int r;
   r=t[(lo+hi)/2].l;
   int i,j;
   i=lo; j=hi;
   do{

       while(t[i].l<r) i++;
       while(t[j].l>r) j--;
       if(i<=j)
       {
           //int x;
           x=t[i]; t[i]=t[j]; t[j]=x;i++;j--;}

   }while(i<=j);
   if(lo<j)quicksort(lo,j);
   if(hi>i)    quicksort(i, hi);
}

int main(int argc, char *argv[])
{

   cin>>n;
   s=0;
   for(int i=0;i<n;i++)
       cin>>t[i].l>>t[i].r;
   quicksort(0,n-1);
   left1=t[0].l;right1=t[0].r;
   for(int i=1;i<n;i++)
       if(right1>=t[i].l && right1<t[i].r)right1=t[i].r;
       else
           if( right1<t[i].r){
               s+=t[i].l-right1;
               right1=t[i].r;}

   cout<<right1-left1-s<<endl;

 
   return EXIT_SUCCESS;
} 