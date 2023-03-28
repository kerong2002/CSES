//2023/03/27 kerong
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	long long unsigned int n = 0;
	cin >> n;
	long long unsigned int ans = n*(n+1)/2;
	if(ans & 1){
		cout << "NO";
	}
	else{
	    ans/=2;
		bool *check = (bool *)calloc(n+1,sizeof(bool));
		int cnt = 0;
		for(long long unsigned int x=n;x>=1;x--){
			if((ans-x)>=0 && ans >= x){
				check[x] = true;
				ans -= x;
				cnt += 1;
			}
		}
		cout << "YES" << endl;
		cout << cnt << endl;
		for(long long unsigned int x=1;x<=n;x++){
			if(check[x]){
				cout << x << " ";
			}
		}
		cout << endl << n-cnt << endl;
		for(long long unsigned int x=1;x<=n;x++){
			if(!check[x]){
				cout << x << " ";
			}
		}
	}
	return 0;
}
