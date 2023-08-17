//2023/08/17 kerong
#include <bits/stdc++.h>
#define SET ios_base::sync_with_stdio(0),\
            cin.tie(0),\
            cout.tie(0)
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;
int main() {
    int n = 0;
    cin >> n;
    vector<vector<char>> g(n, vector<char>(n, '\0'));
    for (auto& y : g) {
        for (auto& x : y) {
            cin >> x;
        }
    }
    vector<vector<int>> dp(n, vector<int> (n, 0));
    if (g[0][0] != '*') {
        dp[0][0] = 1;
    }
    for (int y = 1; y < n; ++y) {
        if (g[y][0] == '*') {
            continue;
        }
        if (g[y - 1][0] != '*') {
            dp[y][0] = dp[y - 1][0];
        }
    }
    for (int x = 1; x < n; ++x) {
        if (g[0][x] == '*') {
            continue;
        }
        if (g[0][x - 1] != '*') {
            dp[0][x] = dp[0][x - 1];
        }
    }
    for (int y = 1; y < n; ++y) {
        for (int x = 1; x < n; ++x) {
            if(g[y][x] == '*') {
                continue;
            }
            int temp = 0;
            if (g[y - 1][x] == '.') {
                temp += dp[y - 1][x];
            }
            if (g[y][x - 1] == '.') {
                temp += dp[y][x - 1];
            }
            dp[y][x] = temp % MOD;
        }
    }
    cout << dp[n - 1][n - 1] << endl;
    return 0;
}
