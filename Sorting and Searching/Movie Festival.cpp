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
		movie.push_back({start, 1});
		movie.push_back({end, -1});
	}

	sort(movie.begin(), movie.end());

	int ans = 0;
	int accumulate = 0;

	for (size_t x = 0; x < movie.size(); ++x) {

        if (movie[x].second == 1 && accumulate == 0){
            accumulate = 1;
        }
		else {
            accumulate = 0;
		}

		if (accumulate == 1 && movie[x].second == 1) {
            ans += 1;
		}
	}

	cout << ans << endl;

	return 0;
}
