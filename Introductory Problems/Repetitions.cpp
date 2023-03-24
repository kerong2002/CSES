//2023/03/24 kerong
#include <iostream>
using namespace std;

int main(){
    string take;
    int max_size = 1;
    int check_size = 1;
    cin >> take;
    char check = take[0];
    for(unsigned int x=1;x<take.length();x++){
        if(take[x] != check){
            check = take[x];
            check_size = 1;
        }
        else{
            check_size += 1;
            max_size = max(max_size, check_size);
        }
    }
    cout << max_size;
    return 0;
}
