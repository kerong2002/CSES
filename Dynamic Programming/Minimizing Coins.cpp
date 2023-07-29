//2023/07/29 kerong
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int c = 0;
    int sum = 0;
    cin >> c >> sum;
    vector<int> coin(c, 0);
    for (int x = 0; x < c; ++x) {
        cin >> coin[x];
    }
    vector<int> dp(sum + 1, INT_MAX);
    dp[0] = 0;
    for (int y = 1; y <= sum; ++y) {
        for (int x = 1; x <= c; ++x) {
            if(y >= coin[x - 1] && dp[y - coin[x - 1]] != INT_MAX) {
                dp[y] = min(dp[y], dp[y - coin[x - 1]] + 1);
            }
        }
    }

    cout << (dp[sum] == INT_MAX ? -1 : dp[sum]) << endl;

    return 0;
}
