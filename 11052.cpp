#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int D[1001];

int main() {
	int num;

	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			int n = D[i - j] + arr[j];
			D[i] = max(n, D[i]);
			
		}
	}


	cout << D[num];


}