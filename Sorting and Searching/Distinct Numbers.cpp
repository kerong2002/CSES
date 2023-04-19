//2023/04/18 kerong
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n = 0;
    cin >> n;
    vector<int> arr(n, 0);
    for(int x=0;x<n;x++){
        cin >> arr[x];
    }
    sort(arr.begin(), arr.end());
    int ans = 1;
    for(int x=1;x<n;x++){
        if(arr[x] != arr[x-1]){
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
