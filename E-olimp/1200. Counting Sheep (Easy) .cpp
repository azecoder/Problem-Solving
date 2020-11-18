#include <cstdlib>
#include <iostream>

using namespace std;
char s[110][110];
void rec(int i,int j)
{
    s[i][j]='.';
    if(s[i-1][j]=='#')
        rec(i-1,j);
    if(s[i+1][j]=='#')
        rec(i+1,j);
    if(s[i][j+1]=='#')
        rec(i,j+1);
    if(s[i][j-1]=='#')
        rec(i,j-1);
}
int main(int argc, char *argv[])
{
    int t;
    cin>>t;
    for(int y=1; y<=t; y++)
    {

        int say=0,n,m,i,j;
        cin>>n>>m;
        string t;
        for(i=1; i<=n; i++)
        {
            cin>>t;
            for(j=1; j<=m; j++)
                s[i][j]=t[j-1];
        }
        for(i=1; i<=n; i++)
            for(j=1; j<=m; j++)
            {
                if(s[i][j]=='#')
                {
                    rec(i,j);
                    say++;
                }
            }
        cout<<say<<endl;
    }
    return 0;
}
