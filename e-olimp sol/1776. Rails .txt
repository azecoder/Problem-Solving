#include<cstdio>
#include<stack>

using namespace std;

int N, c;
stack<int> cars;

void marshal() {
   for(;;) {
       while(cars.size() > 0) cars.pop();
       int j = 0;
       for(int i = 0; i < N; i++) {
           scanf("%d", &c);
           if(c == 0) return;

           while(j < N && j != c) {
               if(cars.size() > 0 && cars.top() == c) break;
               j++;
               cars.push(j);
           }
           if(cars.top() == c) cars.pop();
       }
       if(cars.size() == 0) printf("Yes\n");
       else printf("No\n");
   }
}

int main() {
   for(;;) {
       scanf("%d", &N);
       if(N == 0) break;

       marshal();
       printf("\n");
   }
return 0;
}