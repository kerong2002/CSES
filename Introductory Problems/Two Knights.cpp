//2023/03/25 kerong
/*
    if 3x3 board = C(9,2)
    k = 3, all = 36,  not =  8  (1)
    k = 4, all = 120, not = 24  (3)
    k = 5, all = 300, not = 48  (6)
    k = 6, all = 630, not = 80 (10)
    all_combination = (k^2 -(k^2-1))/2
    not_ok = (k-2) * (k-2 + 1)/2 *8
    not_ok = 4 * (k-2) * (k-1)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n = 0;
    cin >> n;
    for(int k=1;k<=n;k++){
        if(k==1){
            cout << 0 << endl;
        }
        else{
            long long int all_combination = (pow(k,2) * (pow(k,2)-1))/2;
            long long int fail_combination = 4 * (k-2)*(k-1);
            cout << all_combination - fail_combination << endl;
        }
    }
    return 0;
}
