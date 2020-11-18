#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

long Test, cnt, say = 0;
double money, glass;

int main()
{
 scanf("%ld", &Test);
 while(Test --) {
     scanf("%lf %lf", &money, &glass);
     cnt = 1;
     if(money < 1.20)     cnt = 0;
     if(glass != cnt+(long)(money -= 1.20)) say ++;
     //cout << "butulka sayi " << cnt << " -> " << glass << " ---> " << say << endl;
 }
 printf("%ld\n", say);


  return 0;
} 