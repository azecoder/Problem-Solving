#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct data {
    int used;
    int link[10];
};
data emptyy;
vector<data>trie;
vector<int>v;
int t,n,len,cur_index,right_index;
char a[10];
bool flag;

void triee(){
    cur_index = 0; // hemise root-dan baslasin
    for(int i=0; i<len; i++){
        if(trie[cur_index].link[(int)a[i] - 48] == 0){   // ora link yoxdursa (evvel gelmemisemse)
            trie.push_back(emptyy);
            trie[cur_index].link[(int)a[i] - 48] = ++right_index;   // link atiram adini qoyuram right_index
        }

        cur_index = trie[cur_index].link[(int)a[i] - 48];

        if(i == len-1){
            trie[cur_index].used++;
            v.push_back(cur_index);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    cin>>t;
    for(int i=0; i<t; i++){
        flag = 0;
        cin>>n;
        right_index = 0;
        trie.clear();
        trie.push_back(emptyy);
        v.clear();
        for(int j=0; j<n; j++){
            cin>>a;
            len = strlen(a);
            triee();
        }

        for(int j=0; !flag && j<v.size(); j++){
            for(int k=0; k<10; k++){
                if(trie[v[j]].used > 1 || trie[v[j]].link[k]){
                    cout<<"NO"<<endl;
                    flag = 1;
                    break;
                }
            }
        }

        if(!flag){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
