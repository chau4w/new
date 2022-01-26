#include <iostream>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	if (n % 2 == 1) {
		cout << -1; return 0;
	}
	else {
		int* arr = new int[n + 1];
		bool* hasVisited = new bool[n + 1];

		for (int i = 1; i <= n; i++) arr[i] = i;
		for (int i = 1; i <= n; i++) hasVisited[i] = 0;

		int i = 1;
		while (i + k <= n) {
			if (hasVisited[i] == 0) {
				swap(arr[i], arr[i + k]);
				hasVisited[i] = 1; hasVisited[i + k] = 1;
			}
			i++;
		}

		bool hasDoNotVisited = 0;

		for (int i = 1; i <= n; i++)
			if (hasVisited[i] == 0) hasDoNotVisited = 1;

		if (hasDoNotVisited == 1) cout << -1;
		else
			for (int i = 1; i <= n; i++) cout << arr[i] << " ";

		delete[] arr;
		delete[] hasVisited;
	}
	return 0;
}
