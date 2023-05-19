//2023/05/19 kerong
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n = 0;
    int start = 0;
    int end = 0;
    cin >> n;
    vector<pair<int, int>> restaurant;
    for (int x = 0; x < n; ++x) {
        cin >> start >> end;
        restaurant.push_back({start, 1});
        restaurant.push_back({end, -1});
    }

    sort(restaurant.begin(), restaurant.end());

    int max_ans = 0;
    int ans = 0;
    for (int x = 0; x < restaurant.size(); ++x) {
        ans += restaurant[x].second;
        max_ans = max(max_ans, ans);
    }

    cout << max_ans << endl;

    return 0;
}
