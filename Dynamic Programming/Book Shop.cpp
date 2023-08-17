//2023/08/17 kerong
#include <bits/stdc++.h>
#define SET ios_base::sync_with_stdio(0),\
			cin.tie(0),\
			cout.tie(0)
#define endl '\n'
using namespace std;
int main() {
	int n = 0;
	int sum = 0;
	cin >> n >> sum;
	vector<int> prices(n, 0);
	vector<int> pages(n, 0);
	for (auto& x : prices) {
		cin >> x;
	}

	for (auto& x : pages) {
		cin >> x;
	}
	vector<int> dp(sum + 1, 0);
    for (int x = 0; x < n; ++x) {
        for (int y = sum; y >= 1; --y) {
			if (y >= prices[x]) {
				dp[y] = max({dp[y - 1], dp[y - prices[x]] + pages[x], dp[y]});
			}
		}
	}

	cout << dp[sum] << endl;
	return 0;
}
