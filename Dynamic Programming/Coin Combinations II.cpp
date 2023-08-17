//2023/08/16 kerong
#include <bits/stdc++.h>
#define SET ios_base::sync_with_stdio(0),\
            cin.tie(0),\
            cout.tie(0)
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;
int main() {
    SET;
    int n = 0;
    int sum = 0;
    cin >> n >> sum;
    vector<int> v1(n, 0);
    for (auto& x : v1) {
        cin >> x;
    }
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    for (auto x : v1) {
        for (int y = 1; y <= sum; ++y) {
            if (y >= x) {
                dp[y] = (dp[y] + dp[y - x]) % MOD;
            }
        }
    }
//    for (int x = 0; x <= dp.size(); ++x) {
//        cout << x << " ";
//    }
//    cout << endl;
//    for (auto x : dp) {
//        cout << x << " ";
//    }
//
//    cout << endl;
    cout << dp[sum] << endl;

    return 0;
}
