#include <iostream.h>

using namespace std;

int main()
{   
   int N,i,j,s[50000],A[50000][2];
   long double S=0,P;
      cin>>N;
   for(i=0;i<N;i++)
   for(j=0;j<2;j++)
      cin>>A[i][j];
   for(i=0;i<N-1;i++)
   {   
      s[i]=A[i][0]*A[i+1][1]-A[i][1]*A[i+1][0];
      S+=s[i];
   }   
   P=(S+A[N-1][0]*A[0][1]-A[N-1][1]*A[0][0])/2;
   if(P<0)
   P=-P;
   
   cout.setf(ios::fixed);
   cout.precision(1);   
   cout<<P<<endl;
   
   return 0;
}