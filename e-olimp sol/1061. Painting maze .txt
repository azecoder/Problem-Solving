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

char a[100][100];
int used[100][100];
int n,ans=0;

int readInt() {
 int k , p = 1;
 char ch = getchar();
 if (ch == '-') p = -1;
 else k = ch - '0';
 while (ch = getchar()) {
     if (ch < '0' || ch > '9')
         break;
     k = k * 10 + (ch - '0');
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

int chck(int x , int y) {
 if (x < 0 || x >= n) return 1;
 if (y < 0 || y >= n) return 1;
 if ((int)a[x][y] != 46) return 1;
 return 0;
}

void bfs(int x , int y) {
 queue<pr> Q;
 Q.push(mp(x,y));
 used[x][y] = 1;
 while (!Q.empty()) {
     pr cur = Q.front(); Q.pop();
     if (chck(cur.f + 1 , cur.s)) ans++;
     if (chck(cur.f - 1 , cur.s)) ans++;
     if (chck(cur.f , cur.s + 1)) ans++;
     if (chck(cur.f , cur.s - 1)) ans++;
     if (!used[cur.f + 1][cur.s] && a[cur.f + 1][cur.s] == '.') {
         Q.push(mp(cur.f + 1,cur.s));
         used[cur.f+1][cur.s] = 1;
     }
     if (!used[cur.f - 1][cur.s] && a[cur.f - 1][cur.s] == '.') {
         Q.push(mp(cur.f - 1,cur.s));
         used[cur.f-1][cur.s] = 1;
     }
     if (!used[cur.f][cur.s + 1] && a[cur.f][cur.s + 1] == '.') {
         Q.push(mp(cur.f,cur.s + 1));
         used[cur.f][cur.s + 1] = 1;
     }
     if (!used[cur.f][cur.s - 1] && a[cur.f][cur.s - 1] == '.') {
         Q.push(mp(cur.f,cur.s - 1));
         used[cur.f][cur.s - 1] = 1;
     }
 }
}


int main()
{
 scanf("%d",&n);
 for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
         cin >> a[i][j];
     }
 }
 clr(used,0);
 bfs(0,0);
 if (used[n-1][n-1] == 0)
     bfs(n - 1,n-1);
 printf("%d\n",(ans-4)*9);
 return 0;
} 