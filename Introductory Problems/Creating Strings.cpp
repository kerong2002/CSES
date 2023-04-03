//2022/04/03 kerong
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
    return;
}
void permutation(string &s, int start_s, int end_s, vector<string> &ans){
    if(start_s == end_s){
        ans.push_back(s);
        return;
    }
    else{
        for(int x=start_s;x<=end_s;x++){
            bool is_duplicate = false;
            for (int y = start_s; y < x; y++) {
                if (s[x] == s[y]) {
                    is_duplicate = true;
                    break;
                }
            }
            if (!is_duplicate) {
                swap(s[start_s], s[x]);
                permutation(s, start_s+1, end_s, ans);
                swap(s[start_s], s[x]);
            }
        }
    }

}
int factorial(int num){
    if(num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(){
    string n;
    cin >> n;
    int eng[26]={0};
    sort(n.begin(), n.end());
    for(int x=0;x<n.size();x++){
        eng[n[x]-'a']++;
    }
    int max_p = factorial(n.size());
    for(int x=0;x<26;x++){
        if(eng[x]>=1){
            max_p /= factorial(eng[x]);
        }
    }
    cout << max_p << endl;
    vector<string> ans;
    permutation(n, 0, n.size()-1, ans);
    sort(ans.begin(), ans.end());
    for(int x=0;x<ans.size();x++){
        cout << ans[x] << endl;
    }
    return 0;
}
