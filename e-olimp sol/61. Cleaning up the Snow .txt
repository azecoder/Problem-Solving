#include <iostream>
#include <cmath>

#define ULL unsigned long long
#define LL long long

using namespace std;

double dist (LL a , LL b , LL c , LL d){
  return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}

LL x, y, a, b, c, d;;
double way = 0.0;
ULL minute, hour, sec;

int main()
{
  cin >> x >> y;
  while(cin >> a >> b >> c >> d)
      way +=  dist(a,b,c,d);

  minute = (ULL)way * 3 / 500;
  hour = minute / 60;
  minute -= (hour * 60);
  sec = way * 72 / 200;

  if(sec % 60 >= 30)   minute++;
  if(minute >= 60) {
      hour ++;
      minute -= 60;
  }
 
 
  cout << hour << ":" << minute << endl;


  return 0;
} 