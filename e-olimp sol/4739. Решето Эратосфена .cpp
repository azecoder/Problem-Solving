#include <cstdlib>
#include <iostream>

using namespace std;

int isPrime( int n ){
 if( n==0 ) return 0;
 if( n==2 ) return 1;

 for( int i=2;i*i<=n;i++ ){
     if( n%i == 0 ) return 0;
 }
 return 1;
}


int a,b,n,i;
int array[100000];
int main(int argc, char *argv[])
{
 cin>>a>>b;

 for(i = 1; i<=b; i++){
     array[i] = i;
 }
 n=b;

 for( i = 2; i*i<=n; i++ ){
     if(array[i] != 0){
         for( int j=i*i; j<=n; j+=i ){
             if( array[j] != 0 )
                array[j] = 0;
         }
     }
 }

 i=b;
 while( array[i]==0 ){
     i--;
 }
 n=i;


 if(a==1 && b==1 ){

     cout<<"\n";
     
     return EXIT_SUCCESS;
 }

 if(array[n]<a){
     cout<<"\n";
     return EXIT_SUCCESS;
  }
  else{
  for(int i=2; i<n; i++ )
      if( array[i]>=a && array[i]!=0 ){
          cout<<array[i]<<" ";
      }
      cout<<array[n]<<endl;
  }

 
 return EXIT_SUCCESS;
}