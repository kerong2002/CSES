#include <iostream>

using namespace std;
int main(){
	int n = 0;
	int mod = 1e9 + 7;
	cin >> n;
	int answer = 1;
	for(int x=1;x<=n;x++){
		answer *= 2;
		answer %= mod;
	}
	cout << answer;
	return 0;
}