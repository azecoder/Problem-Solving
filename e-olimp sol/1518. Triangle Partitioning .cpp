#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

using namespace std;

struct triangle {
   double a, b, c;//a > b > c
   triangle(double p, double q, double r) {
       a = p, b = q, c = r;
       if(b > a) swap(a, b);
       if(c > a) swap(a, c);
       if(c > b) swap(b, c);
       b /= a, c /= a;
       a = 1;
   }
   #define eps 1e-8
   bool operator<(const triangle &x) const {
       if(fabs(a-x.a) > eps)    return a < x.a;
       if(fabs(b-x.b) > eps)    return b < x.b;
       if(fabs(c-x.c) > eps)    return c < x.c;
       return false;
   }
};
int main() {
   int testcase, cases = 0;
   double a, b, c;
   scanf("%d", &testcase);
   while(testcase--) {
       scanf("%lf %lf %lf", &a, &b, &c);
       set<triangle> S;
       queue<triangle> Q;
       Q.push(triangle(a, b, c)), S.insert(triangle(a, b, c));
       while(!Q.empty()) {
           triangle t = Q.front();
           Q.pop();
           a = t.a, b = t.b, c = t.c;
           double cosB = (a*a+c*c-b*b)/(2*a*c);
           double mid = sqrt(c*c+a*a/4-2*c*(a/2)*cosB);
           if(S.find(triangle(c, mid, a/2)) == S.end()) {
               Q.push(triangle(c, mid, a/2));
               S.insert(triangle(c, mid, a/2));
           }
           if(S.find(triangle(b, mid, a/2)) == S.end()) {
               Q.push(triangle(b, mid, a/2));
               S.insert(triangle(b, mid, a/2));
           }
       }
       printf("Triangle %d: %d\n", ++cases, (int)S.size());
   }
   return 0;
} 
