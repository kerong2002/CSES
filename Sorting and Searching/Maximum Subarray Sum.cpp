#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	int n;
	cin >> n;
	vector<int> dp(n, 0);
	for (int x = 0; x < n; ++x) {
		cin >> dp[x];
	}

	long long int sum = 0;
	long long int ans = -1e9;
	for (int x = 0; x < n; ++x) {
		sum += dp[x];
		ans = max(ans, sum);
		if (sum < 0) {
			sum = 0;
		}
	}
	cout << ans << "\n";
	return 0;
}