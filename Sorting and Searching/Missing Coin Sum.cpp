#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> coin(n, 0);
	for (int x = 0; x < n; ++x) {
		cin >> coin[x];
	}
	
	sort(coin.begin(), coin.end());

	long long int ans = 0;
	for (int x = 0; x < n; ++x) {
		if (coin[x] - ans > 1) {
			break;
		}
		ans += coin[x];
	}

	cout << ans + 1 << "\n";

	return 0;
}