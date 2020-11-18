#include <cstdlib>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int n,i,j;
int c,d; // for sorting
int k,a;
#define max 1001
int hs[max],ms[max],hf[max],mf[max];
int time_s[max],time_f[max];

int main(int argc, char *argv[])
{

   cin>>n;

   for(i=0; i<n; i++){
       scanf("%lld:%lld %lld:%lld",&hs[i],&ms[i],&hf[i],&mf[i]);
       time_s[i]=hs[i]*60+ms[i]; //minute
       time_f[i]=hf[i]*60+mf[i]; //minute
       }

   for(i=0; i<n-1; i++)
       for(j=0; j<n-1; j++){
           if(time_f[j]>time_f[j+1]){
               c=time_f[j+1];
               time_f[j+1]=time_f[j];
               time_f[j]=c;

               d=time_s[j+1];
               time_s[j+1]=time_s[j];
               time_s[j]=d;

               }
           }
/*
   for(i=0; i<n; i++)
       cout<<time_s[i]<<" "<<time_f[i]<<endl;  */
   k=1;
   a=time_f[0];
   for(i=1; i<n; i++){
       if(a<=time_s[i]){
           k++;
           a=time_f[i];
           }
       }
//    cout<<endl<<endl<<endl<<endl<<endl;

   cout<<k<<endl;

   
   return EXIT_SUCCESS;
}