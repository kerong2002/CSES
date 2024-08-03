//2023/05/19 kerong
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    cin >> n >> sum;
    vector<int> val(n, 0);
    map<int, int> mp;
    for (int x = 0; x < n; ++x) {
        cin >> val[x];
    }

    for (int x = 0; x < n; ++x) {
        if (mp.count(sum - val[x])) {
            cout << x + 1 << " " << mp[sum - val[x]] << endl;
            return 0;
        }
        mp[val[x]] = x + 1;
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
