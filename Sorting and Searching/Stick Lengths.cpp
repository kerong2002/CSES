#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	vector<int> p(n, 0);
	for (int x = 0; x < n; ++x) {
		cin >> p[x];
	}

	sort(p.begin(), p.end());

	long long int ans = 0;
	int mid = p[n / 2];
	for (int x = 0; x < n; ++x) {
		ans += abs(mid - p[x]);
	}
	cout << ans << "\n";
	return 0;
}