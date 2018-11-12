#include <iostream>
#include <string.h>
#include <stdio.h>

#define MAXN 16

using namespace std;

int d[MAXN] , c[MAXN];
int used[MAXN];
int n , ans;

void dfs(int v , int sum , int passed_days) {
    int has_child = 0;
    for (int to = 0; to < n; ++to) {
        if (!used[to] && to != v) {
            int new_d = d[to] - passed_days;
            if (new_d > 0) {
                int new_sum = new_d * c[to];
                used[to] = 1;
                dfs(to , sum + new_sum , passed_days + 1);
                used[to] = 0;
                has_child = 1;
            }
        }
    }
    if (!has_child) {
        ans = max(ans , sum);
    }
}

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d",&d[i],&c[i]);
    }
    for (int i = 0; i < n; ++i) {
        memset(used , 0 , sizeof(used));
        used[i] = 1;
        dfs(i , d[i] * c[i] , 1);
    }
    printf("%d\n",ans);

	return 0;
}
