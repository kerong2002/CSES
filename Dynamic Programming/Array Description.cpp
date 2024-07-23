//2023/08/17 kerong
#include <bits/stdc++.h>
#define SET ios_base::sync_with_stdio(0),\
			cin.tie(0),\
			cout.tie(0)
#define endl '\n'
using namespace std;
int main() {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	vector<int> data(n, 0);
	for (auto& x : data) {
        cin >> x;
	}
	vector<vector<int>> dp(m + 1, vector<int> (n, 0));
	for (int y = 1; y <= m; ++y) {
		for (int x = 0; x < n - 1; ++x) {

		}
	}
	return 0;
}
