#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359




vector<pair<long long,char> > m(10);

vector<string> numbers;

int canzero[10];

long long maximumSum(void)

{

    int i, j;

    long long pow10, s;

    for(i = 0; i < 10; i++) m[i].first =0, m[i].second = i + 'A',canzero[i] = 1;

    for(i = 0; i < numbers.size(); i++)

    {

        pow10 = 1;

        for(j = numbers[i].size() - 1; j >= 0; j--)

        {

            m[numbers[i][j]-'A'].first += pow10;

            pow10 *= 10;

        }

        canzero[numbers[i][0]-'A'] = 0;

    }

    sort(m.begin(),m.end());



    for(i = 0; !canzero[m[i].second - 'A']; i++);

    swap(m[0],m[i]);

    sort(m.begin() + 1,m.end());



    for(s = i = 0; i < 10; i++)

        s += m[i].first * i;

    return s;

}


int n;
char s[1001];

int main()
{

    while(scanf("%d\n",&n) == 1)

    {

        numbers.clear();

        for(int i = 0; i < n; i++)

            gets(s), numbers.push_back(s);

        ll res = maximumSum();

        printf("%lld\n",res);

    }

    return 0;

}


