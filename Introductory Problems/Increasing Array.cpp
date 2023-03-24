//2023/03/24 kerong
#include <iostream>
using namespace std;
int main(){
    int s1 = 0;
    int s2 = 0;
    int n = 0;
    long long int ans = 0;
    cin >> n;
    cin >> s1;
    for(int x=0;x<n-1;x++){
        cin >>s2;
        if(s1>s2){
            ans += s1 - s2;
        }
        s1 = max(s1,s2);
    }
    cout << ans;
    return 0;
}
