//2023/03/30 kerong
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t = 0;
	int a = 0;
	int b = 0;
	int upper = 0;
	int lower = 0;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(!a && !b){
            cout << "YES" << endl;
		}
		else if(a==b){
			cout << ((a%3==0) ? "YES" : "NO") << endl;
		}
		else{
			upper = max(a,b);
			lower = min(a,b);
			if(upper > 2*lower){
                cout << "NO" << endl;
			}
			else if((a+b)%3!=0){
                cout << "NO" << endl;
			}
			else{
                cout << "YES" << endl;
			}

		}
	}
    return 0;
}
