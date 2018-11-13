#include <iostream>
#include <cstring>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <cstdio>

#define LL long long
#define MAXN 12002

using namespace std;

long long a[MAXN];

int main()
{
   LL n, m;
   cin >> n >> m;
   for(LL i = 1; i <= n; i++)
       cin >> a[i];

   LL minLength = 1, maxLength = pow(10, 7);
   while(1) {
       LL countMinLength = 0, countMaxLength = 0, countMidLength = 0;
       LL midLength = (minLength + maxLength)/2;
       for(LL i = 1; i <= n; i++) {
           countMinLength += a[i]/minLength;
           countMaxLength += a[i]/maxLength;
           countMidLength += a[i]/midLength;
       }
       //cout << "countMinLength : " << countMinLength << "\t-\t minLength : " << minLength << endl;
       //cout << "countMidLength : " << countMidLength << "\t-\t midLength : " << midLength << endl;
       //cout << "countMaxLength : " << countMaxLength << "\t-\t maxLength : " << maxLength << endl << endl;
       if(countMinLength < m) {
           cout << 0 << endl;
           return 0;
       }
       if(countMaxLength >= m) {
           cout << maxLength << endl;
           return 0;
       }
       else if(countMidLength >= m && countMinLength >= m && maxLength - midLength <= 1) {
           cout << midLength << endl;
           return 0;
       }
       else if(countMidLength >= m)
           minLength = midLength;
       else
           maxLength = midLength;
   }

   return 0;
} 