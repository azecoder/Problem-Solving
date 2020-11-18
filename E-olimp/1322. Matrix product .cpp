#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <memory.h>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <math.h>

#pragma comment(linker, "/STACK:99999999")
#define ALL(a) a.begin() , a.end()
#define ALL(a,n) a , a + n
#define clr(a,b) memset(a , b , sizeof(a))
#define f first
#define s second
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int,int> pr;
typedef long long ll;

int a[501][501],b[501][501];
ll ans[501][501];
int n;

int readInt() {
 int k = 0, p = 1;
 char ch = getchar();
 while((int)ch<33)
     ch=getchar();
 if (ch == '-') p = -1;
 else k = ch - '0';
 while (ch = getchar()) {
     if (ch < '0' || ch > '9')
         break;
     k = k * 10 + (ch - '0');
 }
 return k * p;
}

ll readLong() {
 ll k = 0 , p = 1;
 char ch = getchar();
 while((int)ch<33)
     ch=getchar();
 if (ch == '-') p = -1;
 else k = ch - '0';
 while (ch = getchar()) {
     if (ch < '0' || ch > '9')
         break;
     k = k * 10 + ll(ch - '0');
 }
 return k * p;
}

template<typename t>
void print(t n) {
 t k = n;
 char output[20];
 int len = 0;
 if (n < 0) n *= -1;
 if (n == 0)
     output[len++] = '0';
 while (n > 0) {
     t m = n / 10;
     output[len++] = (n - 10 * m) + '0';
     n = m;
 }
 if (k < 0) output[len++] = '-';
 while (len > 0)
     putchar(output[--len]);
}

int main()
{
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);

 while (scanf("%d",&n) == 1 && n != 0) {
     for (int i = 0; i < n; i++)
         for (int j = 0; j < n; j++)
             a[i][j]=readInt();
     for (int i = 0; i < n; i++)
         for (int j = 0; j < n; j++)
             b[i][j]=readInt();
     int res = 1;
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             int x = readInt();
             for (int k = 0; k < n && res == 1; k++) {
                 ll tmp = a[i][k];
                 tmp *= (ll)b[k][j];
                 ans[i][j] += tmp;
             }
             if (ans[i][j] != x)
                 res = 0;
         }
     }
     if (res) printf("YES\n");
     else printf("NO\n");
     clr(ans,0);
 }

 return 0;
} 