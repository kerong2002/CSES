//2023/04/21 kerong
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n = 0;
    int w = 0;
    cin >> n >> w;
    vector<int> child(n, 0);
    for(int x=0;x<n;x++){
        cin >> child[x];
    }
    sort(child.begin(), child.end());
    int r = child.size()-1;
    int l = 0;
    int ans = 0;
    while(l <= r){
        if(child[l] + child[r] > w){
            r--;
            ans++;
        }
        else{
            r--;
            l++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
