//2023/03/24 kerong
#include <iostream>
using namespace std;
int main(){
    long long int n = 0;
    int take = 0;
    cin >> n;
    long long int m = 0;
    if(n&1){
        m = (n+1)/2 * n;
    }
    else{
        m = (n+1) * (n/2);
    }
    for(int x=1;x<n;x++){
        cin >> take;
        m -= take;
    }
    cout << m;
    return 0;
}
