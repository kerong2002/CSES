//2023/05/02 kerong
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int price = 0;
    multiset<int> sort_ticket;
    for(int x=0;x<n;x++){
        cin >> price;
        sort_ticket.insert(price);
    }


    int customer= 0;
    for(int x=0;x<m;x++){
        cin >> customer;
        set<int>::iterator match = sort_ticket.upper_bound(customer);
        if(match == sort_ticket.begin()){
            cout << "-1" << endl;
        }
        else{
            cout << (*--match) << endl;
            sort_ticket.erase(match);
        }
    }
    return 0;
}
