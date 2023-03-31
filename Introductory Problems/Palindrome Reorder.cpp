//2023/03/31 kerong
#include <iostream>

using namespace std;
int main(){
    string n;
    cin >> n;
    int eng[26] = {0};

    for(char x : n){
        eng[x-'A']+=1;
    }

    if(n.size()&1){
        int odd = 0;
        int even = 0;
        int odd_pos = -1;
        for(int x=0;x<26;x++){
            if(eng[x]&1){
                odd += 1;
                odd_pos = x;
            }
            else{
                even += 1;
            }
        }
        if(odd == 1){
            string s(n.size(), '\0');
            int cnt = 0;
            for(int L=0, R=s.size()-1; L<R ; L++,R--){
                if(cnt >=26){
                    break;
                }
                while(true){
                    if(cnt >=26){
                        break;
                    }
                    if(eng[cnt]>0 && cnt != odd_pos){
                        s[L] = cnt + 'A';
                        eng[cnt] -= 1;
                        break;
                    }
                    else{
                        cnt += 1;
                    }
                }
                while(true){
                    if(cnt >=26){
                        break;
                    }
                    if(eng[cnt]>0 && cnt != odd_pos){
                        s[R] = cnt + 'A';
                        eng[cnt] -= 1;
                        break;
                    }
                    else{
                        cnt += 1;
                    }
                }
            }
            for(int L=n.size()/2, R=n.size()/2; R-L < eng[odd_pos] ; L--, R++){
                s[L] = odd_pos + 'A';
                s[R] = odd_pos + 'A';
            }
            cout << s << endl;
        }
        else{
            cout << "NO SOLUTION" << endl;
        }
    }
    else{
        for(int x=0;x<26;x++){
            if(eng[x]&1){
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
        string s(n.size(), '\0');
        int cnt = 0;
        for(int L=0, R=s.size()-1; L<R ; L++,R--){
            while(true){
                if(eng[cnt]>0){
                    s[L] = cnt + 'A';
                    eng[cnt] -= 1;
                    break;
                }
                else{
                    cnt += 1;
                }
            }
            while(true){
                if(eng[cnt]>0){
                    s[R] = cnt + 'A';
                    eng[cnt] -= 1;
                    break;
                }
                else{
                    cnt += 1;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
