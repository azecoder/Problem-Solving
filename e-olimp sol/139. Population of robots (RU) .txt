#include <iostream>
#include <algorithm>
#include <cstdlib>

/*
 * @author: Tabriz Hajiyev
 */
 
using namespace std;

int MAX = 0;

int main(int argc, char** argv) {
	
	int A, B, C, D, N, K;
	
	cin >> A >> B >> C >> D >> N >> K;
	
	for(int j = 0; j < K; j ++) {
		for(int i = 0; i <= N; i++) {
			int sum = 0;
			if(i%A)			sum += (i - i%A)*C/A;	
			else			sum += i*C/A;
			if((N-i)%B)		sum += ((N-i) - (N-i)%B)*D/B;
			else			sum += (N-i)*D/B;
			
			MAX = max(MAX, sum);
	//		cout << i << " -> " << MAX << endl;	
		}
		N += MAX;
	//	cout << " - - - - - - - - - - - " << endl;
	}

	cout << N << endl;
	
	
	return 0;
}