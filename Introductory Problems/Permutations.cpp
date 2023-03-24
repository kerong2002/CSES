//2023/03/24 kerong
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    if(n==1){
        cout << 1;
    }
    else if(n<=3){
        cout << "NO SOLUTION";
    }
    else{
        int even = ((n&1) ? n-1 : n);
        for(int x=2;x<=even;x+=2){
            cout << x << " ";
        }
        int odd = ((n&1) ? n : n-1);
        for(int x=1;x<=odd;x+=2){
            cout << x << " ";
        }
    }
    return 0;
}
