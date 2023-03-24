//2023/03/24 kerong
#include <iostream>
using namespace std;

int main(){
    long long int n = 0;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n&1){
            n=n*3+1;
        }
        else{
            n/=2;
        }
    }
    cout << n ;
    return 0;
}
