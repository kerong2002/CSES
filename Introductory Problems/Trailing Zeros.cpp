//2023/03/28 kerong
#include <iostream>
#include <iomanip>
/*
    1! =      1  2! =       2
    3! =      6  4! =      24
    5! =    120  6! =     720
    7! =   5040  8! =   40320
    9! = 362880 10! = 3628800
*/
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    int ans = 0;
	while(n>=5){
		ans += n/5;
		n/=5;
	}
	cout << ans;
	return 0;
}
