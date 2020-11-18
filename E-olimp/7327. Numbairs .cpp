#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cstring>
#include <memory.h>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

long long n, cnt = 0, num = 2;


int main()
{
cin >> n;
if(n >= 1)              cnt++;//1^1
if(n >= 4)              cnt++;//2^2
if(n >= 16)             cnt++;//2^2^2
if(n >= 27)             cnt++;//3^3
if(n >= 256)            cnt++;//2^2^2^2 //4^4
if(n >= 3125)           cnt++;//5^5
if(n >= 46656)          cnt++;//6^6
if(n >= 65536)          cnt++;//6^6
if(n >= 823543)         cnt++;//7^7
if(n >= 16777216)       cnt++;//8^8
if(n >= 387420489)      cnt++;//9^9
if(n >= 4294967296)     cnt++;//9^9
cout << cnt << endl;

return 0;
} 