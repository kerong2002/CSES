//2023/05/20 kerong
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n = 0;
	int start = 0;
	int end = 0;
	cin >> n;
	vector<pair<int, int>> movie;
	for (int x = 0; x < n; ++x) {
		cin >> start >> end;
		movie.push_back({end, start});
	}

	sort(movie.begin(), movie.end());

	int ans = 0;
	int accumulate = 0;

	for (int x = 0; x < movie.size(); ++x) {
		if (movie[x].second >= accumulate) {
			ans += 1;
			accumulate  = movie[x].first;
		}
	}

	cout << ans << endl;

	return 0;
}
