//2023/04/18 kerong
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 0;
    int m = 0;
    int k = 0;
    cin >> n >> m >> k;
    vector<int> applicants(n, 0);
    for(int x=0;x<n;x++){
        cin >> applicants[x];
    }
    vector<int> apartments(m, 0);
    for(int x=0;x<m;x++){
        cin >> apartments[x];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int person = 0;
    int house = 0;
    int ans = 0;
    while(person < n && house < m){
        if(abs(applicants[person] - apartments[house]) <= k){
            person++;
            house++;
            ans++;
        }
        else if(applicants[person] < apartments[house]){
            person++;
        }
        else{
            house++;
        }
    }
    cout << ans << endl;
    return 0;
}
