#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> num(n, 0);
	for (int x = 0; x < n; ++x) {
		cin >> num[x];
	}

	int ans = 0;
	vector<int> idx(n + 1, 0);
	
	for (int x = 0; x < n; ++x) {
		idx[num[x]] = x;
	}

	for (int x = 1; x < n; ++x) {
		if (idx[x + 1] < idx[x]) {
			++ans;
		}
	}

	cout << ans + 1 <<"\n";
	return 0;
}