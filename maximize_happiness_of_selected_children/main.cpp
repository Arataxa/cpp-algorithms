#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long maximumHappinessSum(vector<int> happiness, int k) {
	long long result = 0;

	partial_sort(happiness.begin(), happiness.begin() + k, happiness.end(), greater<int>());

	while (k--) {
		result += max(0, happiness[k] - k);
	}

	return result;
}


int main() {
	vector<int> happiness = { 4, 1, 2, 1, 7, 8, 9 };
	int k = 3;
	cout << "Maximum happiness sum is: " << maximumHappinessSum(happiness, k) << endl;
}