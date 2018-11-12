#include <iostream>
using namespace std;
int d, w = 4, l, i, j, a[100000], k, res, tests, A, B, ans;
int main()
{
  for( i = 1920; i <= 2050; i++ ){
       res = 0;
       if( i % 4 == 0 ){
           for( j = 1; j <= 12; j++ ){
                if( j == 1 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 2 ){
                    for( k = 1; k <= 29; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 3 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 4 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 5 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 6 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 7 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 8 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 9 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 10 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 11 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 12 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
           }
       }
       if( i % 4 != 0 ){
           for( j = 1; j <= 12; j++ ){
                if( j == 1 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 2 ){
                    for( k = 1; k <= 28; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 3 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 4 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 5 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 6 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 7 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 8 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 9 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 10 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 11 ){
                    for( k = 1; k <= 30; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
                if( j == 12 ){
                    for( k = 1; k <= 31; k++ ){
                         w++;
                         if( w == 7 )
                             w = 0;
                         if( w == 1 && k == 1 )
                             res++;
                    }
                }
           }
       }
       a[i] = res;    
       }
  cin>>tests;
  while( tests-- ){
         cin>>A>>B;
         for( i = A; i <= B; i++ )
              ans = ans + a[i];
         }
  cout<<ans<<endl;
 
  return 0;
} 