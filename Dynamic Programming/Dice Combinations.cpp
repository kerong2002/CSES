//2023/07/29 kerong
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 0;
    cin >> n;
    vector<int> dp (n + 1, 0);
    dp[0] = 1;
    for (int y = 1; y <= n; ++y) {
        for (int x = 1;  x <= 6; ++x) {
            if(y - x >= 0) {
                dp[y] = (dp[y] + dp[y - x]) % static_cast<int>(1e9 + 7);
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}
