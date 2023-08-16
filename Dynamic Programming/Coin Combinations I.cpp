//2023/08/16 kerong
#include <bits/stdc++.h>
const int MOD = 1e9 + 7;
using namespace std;
int main() {
    int n = 0;
    int c = 0;
    cin >> n >> c;
    vector<int> c1(n, 0);
    for (auto& x : c1) {
        cin >> x;
    }
    vector<long long int> dp(c + 1, 0);
    dp[0] = 1;
    for (int y = 1; y <= c; ++y) {
        for (auto x : c1) {
            if (y >= x) {
                dp[y] = (dp[y - x] + dp[y]) %  MOD;
            }
        }
    }
//    for (auto x : dp) {
//        cout << x << " ";
//    }
//    cout << endl;
    cout << dp[c] << '\n';
    return 0;
}
