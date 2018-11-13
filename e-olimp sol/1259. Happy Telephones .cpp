#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char const* argv[]) {
       int N, M;        
       scanf("%d %d", &N, &M);

       int s, d, st, du;
       int pst, pdu, pet;
       int count;
       while (N != 0 && M != 0) {
               vector<pair<int,int> > times(N,pair<int,int>());
               
               for (unsigned int i = 0; i < N; i++) {
                       scanf("%d %d %d %d", &s, &d, &st, &du);
                       times[i] = make_pair(st,st+du);
               }
               
               for (unsigned int i = 0; i < M; i++) {
                       count = 0;
                       scanf("%d %d", &pst, &pdu);
                       pet = pst + pdu;
                       
                       for (unsigned int j = 0; j < N; j++) {
                               for (unsigned int k = max(pst,times[j].first); k < min(pet,times[j].second); k++) {
                                       if ((k >= pst && k < pet) || (k > pst && k <= pet)) {
                                               count++;
                                               break;                
                                       }
                               }
                       }
                       printf("%d\n",count);
               }
               
               scanf("%d %d", &N, &M);
       }   
       

   
   return 0;
}