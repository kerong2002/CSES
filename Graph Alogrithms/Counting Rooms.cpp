//2023/08/21 kerong
#include <bits/stdc++.h>
using namespace std;
 
void dfs(vector<vector<char>>& g, int y, int x) {
    if(y < 0 || x < 0 || y >= g.size() || x >= g[0].size()) {
        return;
    }
    else if(g[y][x] != '.') {
        return;
    }
    else {
        g[y][x] = ' ';
        dfs(g, y + 1, x);
        dfs(g, y, x + 1);
        dfs(g, y - 1, x);
        dfs(g, y, x - 1);
    }
}
int main() {
    int row = 0;
    int col = 0;
    int ans = 0;
    cin >> row >> col;
    vector<vector<char>> g(row, vector<char>(col, ' '));
    for (int y = 0; y < row; ++y) {
        string temp;
        cin >> temp;
        for (int x = 0; x < col; ++x) {
             g[y][x] = temp[x];
        }
    }
 
    for (int y = 0; y < row; ++y) {
        for (int x = 0; x < col; ++x) {
            if(g[y][x] == '.') {
                dfs(g, y, x);
                ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}