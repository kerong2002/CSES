//2023/08/16 kerong
#include <bits/stdc++.h>
#define SET ios_base::sync_with_stdio(0),\
			cin.tie(0),\
			cout.tie(0)
#define endl '\n'
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int ans = 0;
	while (n != 0) {
		string temp = to_string(n);
		int m = 0;
		for (auto c : temp) {
			if (c - '0' > m) {
				m = c - '0';
			}
		}
		n -= m;
		++ans;
	}
	cout << ans << endl;
	return 0;
}