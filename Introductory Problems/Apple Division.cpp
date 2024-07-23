#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dfs(const vector<int> p, int pos, ll sum1, ll sum2, const int n) {
	if (pos == n) {
		return abs(sum1 - sum2);
	}
	else {
		ll left = dfs(p, pos + 1, sum1 + p[pos], sum2, n);
		ll right = dfs(p, pos + 1, sum1, sum2 + p[pos], n);
		return min(left, right);
	}
}

int main () {
	ll n = 0;
	cin >> n;
	vector<int> p(n, 0);
	for (auto& x : p) {
		cin >> x;
	}

	ll ans = dfs(p, 0, 0, 0, n);
	cout << ans;

	return 0;
}
