#include <iostream>
using namespace std;


int N;
int arr[1000001];
int tmp[1000001];

// i     mid j 
// ㅁㅁㅁㅁ/ ㅁㅁㅁㅁ
void merge(int start, int end) {
	int mid = (start + end) / 2;

	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) {
		if (arr[i] < arr[j]) {
			tmp[k++] = arr[i++];

		}
		else {
			tmp[k++] = arr[j++];
		}

		if (i > mid) {
			for (int t = j; t <= end; t++) {
				tmp[k++] = arr[t];
			}
		}
		if (j > end) {
			for (int t = i; t <= mid; t++) {
				tmp[k++] = arr[t];
			}
		}
	}


	for (int t = start; t <= end; t++) {
		arr[t] = tmp[t];
	}

}

void Sort(int start, int end) {
	if (start >= end) return;
	int mid;
	if (start < end) {
		mid = (start + end) / 2;
		Sort(start, mid);
		Sort(mid + 1, end);
		merge(start, end);
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	Sort(0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}

	return 0;

}