//2023/04/02 kerong
#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int N, int a, int b, int c){
    if(N==1){
        cout << a << " " << c << endl;
    }
    else{
        hanoi(N-1, a, c, b);
        cout << a << " " << c << endl;
        hanoi(N-1, b, a, c);
    }
}
int main(){
    int n = 0;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    hanoi(n,1, 2, 3);
    return 0;
}
