#include <iostream>
using namespace std;

int memo[20];

int fibo(int n) {
	if (n <= 1)
		return n;
	else {
		if (memo[n] == 0) // 계산한 적이 없어 값이 아무것도 저장되어있지 않다면
			memo[n] = fibo(n - 1) + fibo(n - 2);
		return memo[n];
		
	}
}

int main() {
	int num;
	cin >> num;
	cout << fibo(num);
        return 0;
}

