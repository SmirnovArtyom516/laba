#include<iostream>

using namespace std;

int main() {
	const int n = 6;
	int arr[n] = { 11, -80, 34, 0, -80, 41 };
	int x, i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}

	for (i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}