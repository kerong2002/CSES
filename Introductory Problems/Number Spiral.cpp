//2023/03/24 kerong
/*
    max_size = max(y,x) - 1
    Diagonal f(x) = 1 + (max_size+1)*max_size
    For vertical if max_size is odd, increasing number
*/
#include <iostream>
using namespace std;

int main(){
    int times = 0;
    cin >> times;
    int y = 0;
    int x = 0;
    while(times--){
        cin >> y >> x;
        long long int max_size = max(y,x) - 1;
        long long int diagonal = 1 + (max_size+1)*max_size;
        if(max_size & 1){
            cout << diagonal + y - x << endl;
        }
        else{
            cout << diagonal + x - y << endl;
        }

    }
    return 0;
}
