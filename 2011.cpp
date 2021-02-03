#include <iostream>
#include <string>

using namespace std;

#define MOD 1000000

int main() {
	string arr;
	long long D[5001];

	cin >> arr;

	int length = arr.size();

	arr = " " + arr;

	//예외처리
	for (int i = 1; i <= length; i++) {
		if (arr[i] == '0') {
			if (i == 1) {
				cout << "0";
				return 0;
			}
			else if (arr[i - 1] != '1' && arr[i - 1] != '2') {
				cout << "0";
				return 0;
			}
		}
		
	}
	

	D[0] = 1;
	for (int i = 1; i <= length; i++) {
		int x = arr[i] - '0';
		if (1 <= x && x <= 9) {
			D[i] = D[i - 1] % MOD;
		}

		int IsChar = (arr[i - 1] - '0') * 10 + x;
		if (10 <= IsChar && IsChar <= 26) {
			D[i] = (D[i] + D[i - 2]) % MOD;
		}
	}

	cout << D[length];
	
	return 0;
}