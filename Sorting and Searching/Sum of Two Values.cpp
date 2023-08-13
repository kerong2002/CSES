//2023/05/19 kerong
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    cin >> n >> sum;
    vector<int> pos(n, 0);
    unordered_map<int, int> hashTable;
    for (int x = 0; x < n; ++x) {
        cin >> pos[x];
        hashTable[pos[x]] = x + 1;
    }

    sort(pos.begin(), pos.end());

    int L = 0;
    int R = n - 1;
    bool ans = false;

    while (L < R) {
        if (pos[L] + pos[R] < sum) {
            ++L;
        }
        else if (pos[L] + pos[R] > sum) {
            --R;
        }
        else {
            ans = true;
            break;
        }
    }

    if (ans) {
        cout << hashTable[pos[L]] << " " << hashTable[pos[R]] << endl;
    }
    else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
