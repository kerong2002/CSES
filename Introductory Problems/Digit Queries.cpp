//2023/08/13 kerong
#include <bits/stdc++.h>
#define SET ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define LL unsigned long long
#define BOUNDARY 19

using namespace std;
int main(){
    SET;
    vector<LL> upper(BOUNDARY, 0), lower(BOUNDARY, 0);

    for(int x = 0; x < BOUNDARY; ++x) {
        lower[x] = static_cast<LL> (pow(10, x));
        upper[x] = lower[x] * 9 * (x + 1);
    }
    LL q = 0, k = 0;

    cin >> q;
    while (q--) {
        cin >> k;
        LL interval = 0;
        while (k > upper[interval]) {
            k -= upper[interval];
            ++interval;
        }
        --k;
        LL quotient = k / (interval + 1);
        LL reminder = k % (interval + 1);
        string ans = to_string(lower[interval] + quotient);
        cout << ans[reminder] << endl;
    }
    return 0;
}
