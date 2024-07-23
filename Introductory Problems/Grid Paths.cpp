#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int>& line, vector<vector<int>>& graph, int x, int y, int pos, int& ans) {
    if (x < 0 || y < 0 || x >= 9 || y >= 9 || graph[y][x] != 0) {
        return;
    }
    
    if (x == 1 && y == 7) {
        if (pos == 48) {
            ans += 1;
            return;
        }
        return;
    }
    
    if (pos == 48) {
        return;
    }
    
    if ((x >= 1 && x <= 7 && y >= 1 && y <= 7 &&
         ((graph[y][x - 1] != 0 && graph[y][x + 1] != 0 && graph[y - 1][x] == 0 && graph[y + 1][x] == 0) ||
          (graph[y - 1][x] != 0 && graph[y + 1][x] != 0 && graph[y][x - 1] == 0 && graph[y][x + 1] == 0)))) {
        return;
    }

    graph[y][x] = 1;

   if (line[pos] != 0) {
        if (line[pos] == 1) {
            dfs(line, graph, x, y - 1, pos + 1, ans);
        } 
        else if (line[pos] == 2) {
            dfs(line, graph, x + 1, y, pos + 1, ans);
        } 
        else if (line[pos] == 3) {
            dfs(line, graph, x, y + 1, pos + 1, ans);
        } 
        else if (line[pos] == 4) {
            dfs(line, graph, x - 1, y, pos + 1, ans);
        }
   }
    else {
        dfs(line, graph, x, y - 1, pos + 1, ans); // U
        dfs(line, graph, x + 1, y, pos + 1, ans); // R
        dfs(line, graph, x, y + 1, pos + 1, ans); // D
        dfs(line, graph, x - 1, y, pos + 1, ans); // L
    }

    graph[y][x] = 0;


    return;
}

int main() {
    string str;
    cin >> str;
    vector<int> line(48, 0);
    for (int x = 0; x < 48; ++x) {
        if (str[x] == 'U') {
            line[x] = 1;
        } else if (str[x] == 'R') {
            line[x] = 2;
        } else if (str[x] == 'D') {
            line[x] = 3;
        } else if (str[x] == 'L') {
            line[x] = 4;
        }
    }

    vector<vector<int>> graph(9, vector<int>(9, 0));
    for (int t = 0; t < 9; ++t) {
        graph[t][8] = 1;
        graph[8][t] = 1;
        graph[t][0] = 1;
        graph[0][t] = 1;
    }

    int ans = 0;
    dfs(line, graph, 1, 1, 0, ans);
    cout << ans << "\n";
    return 0;
}