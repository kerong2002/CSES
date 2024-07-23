#include <bits/stdc++.h>
using namespace std;
int ld[15], rd[15], row[8];
void dfs(int x, vector<vector<char>> dp, int& ans) {
	if (x == 8) {
		ans += 1;
		return;
	}
	for (int y = 0; y < 8; ++y) {
		if (dp[y][x] == '.' && ld[y-x+7] == 0 && rd[y+x] == 0 && row[y] == 0){
			ld[y-x+7] = 1;
			rd[y+x] = 1;
			row[y] = 1;
			dfs(x + 1, dp, ans);
			ld[y-x+7] = 0;
			rd[y+x] = 0;
			row[y] = 0;
		}
	}
}

int main() {
	vector<vector<char>> dp(8, vector<char> (8, '\0'));
	for (int y = 0; y < 8; ++y) {
		for (int x = 0; x < 8; ++x) {
			cin >> dp[y][x];
		}
	}
	int ans = 0;
	dfs(0, dp, ans);
	cout << ans;
	return 0;
}