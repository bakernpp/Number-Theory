
#include<bits/stdc++.h>
using namespace std;

bool status[1000000 + 1];

void  Sieve(int N) {

    int sq = sqrt(N);

    for (int i = 4; i <= N; i += 2) {
        status[i] = 1;
    }

    for (int i = 3; i <= sq; i += 2) {
        if (status[i] == 0) {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
        }
    }

    status[1] = 1;
}
void test(int N){
	int sqq=N/2;
    int cnt = 0;
	for (int i = 1; i <= sqq; i ++) {
        if (status[i] == 0) {
            int  r = N - i;
            if (status[r] == 0) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}
int main(){

    int C, N;
    Sieve(1000000);
	while(cin >> N){
		if(N==0) break;
		test(N);
	}

    return 0;
}
