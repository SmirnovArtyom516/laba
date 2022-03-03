#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> numbers;
	int inserted, i, j, a;

	while (1) {
		cin >> a;
		if (cin.fail()) {
			break;
		}
		numbers.push_back(a);
	}

	inserted = 0;
	for (i = 1; i < numbers.size(); i++) {
		for (j = 0; j < i; j++) {
			if (numbers[i] > numbers[j]) {
				if (numbers[i] <= numbers[j + 1]) {
					inserted = 1;
					numbers.insert(numbers.begin() + j + 1, numbers[i]);
					numbers.erase(numbers.begin() + i + 1);
					break;
				}
			}
		}
		if (inserted == 0) {
			numbers.insert(numbers.begin(), numbers[i]);
			numbers.erase(numbers.begin() + i + 1);
		}
		else {
			inserted = 0;
		}
	}

	for (i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}

	return 0;
}