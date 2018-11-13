#include <iostream>
#include <math.h>
using namespace std;
long n, m ,w, i, j, x[1001], y[1001], a[1001][1001], k, b[1001][1001];
int main()
{
cin>>n>>m>>w;
for( i = 1; i <= w; i++ ){
     cin>>x[i]>>y[i];
     a[x[i]][y[i]] = -1;
     }
for( i = 1; i <= n; i++ ){
     for( j = 1; j <= m; j++ ){
          k = 0;
          if( a[i][j] != -1 ){
              if( a[i-1][j-1] == -1)
                  k++;
              if( a[i-1][j] == -1)
                  k++;
              if( a[i-1][j+1] == -1)
                  k++;
              if( a[i][j+1] == -1)
                  k++;
              if( a[i+1][j+1] == -1)
                  k++;
              if( a[i+1][j] == -1)
                  k++;
              if( a[i+1][j-1] == -1)
                  k++;
              if( a[i][j-1] == -1)
                  k++;
              b[i][j] = k;
              }
          else
                  b[i][j] = a[i][j];
     
     }
     }
 for( i = 1; i <= n; i++ ){
     for( j = 1; j < m; j++ ){
          if( b[i][j] == -1)
              cout<<"* ";
          else
              cout<<b[i][j]<<" ";
          }
     if( b[i][m] == -1)
         cout<<"*"<<endl;
     else
         cout<<b[i][m]<<endl;
          }
 return EXIT_SUCCESS;
}