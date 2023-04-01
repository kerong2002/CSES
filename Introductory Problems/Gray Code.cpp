//2023/03/31 kerong
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n = 0;
    cin >> n;
    vector<string> gray_1{"0", "1"};
    vector<string> gray_1R{"1", "0"};
    for(int t=2;t<=n;t++){
        vector<string>  take;
        vector<string>  take_R;
        for(unsigned int x=0;x<gray_1.size();x++){
            take.push_back(gray_1[x]+"0");
        }
        for(unsigned int x=0;x<gray_1.size();x++){
            take.push_back(gray_1R[x]+"1");
        }
        for(unsigned int x=0;x<gray_1R.size();x++){
            take_R.push_back(gray_1[x]+"1");
        }
        for(unsigned int x=0;x<gray_1R.size();x++){
            take_R.push_back(gray_1R[x]+"0");
        }
        gray_1 = take;
        gray_1R = take_R;
    }
    for(unsigned int y=0;y<gray_1.size();y++){
        for(int x=gray_1[y].size()-1;x>=0;x--){
            cout << gray_1[y][x];
        }
        cout << endl;
    }
    return 0;
}
