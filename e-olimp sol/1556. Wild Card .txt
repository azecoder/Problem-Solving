#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


#define MOD 1000000007

#define MAX 55

int f[MAX][MAX];

char file[MAX], pattern[MAX];


int minimalChanges(string file, string pattern)

{

    int i, j;

    memset(f,63,sizeof(f));

    for(i = 0; i < file.size(); i++) f[i][0] = i;

    for(j = 1; j < pattern.size(); j++) f[0][j] = j;


    for(i = 1; i < file.size(); i++)

        for(j = 1; j < pattern.size(); j++)

            f[i][j] = min(min(1+f[i-1][j],1 + f[i][j-1]),

                          (!((file[i] == pattern[j]) || (pattern[j] == '?'))) +

                          f[i-1][j-1]);

    return f[file.size()-1][pattern.size()-1];

}

int main()
{

    while(scanf("%s %s\n",&file[1],&pattern[1]) == 2)

    {

        file[0] = pattern[0] = ' ';

        int res = minimalChanges(file,pattern);

        printf("%d\n",res);

    }



    return 0;

}


