#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >>m;

    multiset<int> tickets;

    for(int i = 0; i < n ; i++){
        int input; cin >> input;
        tickets.insert(-input);
    }


    for(int i = 0; i < m ; i++){
        int x; cin >> x;
        auto it = tickets.lower_bound(-x);
        if(it == tickets.end()){
            cout << "-1" << "\n";
        }
        else{
            cout << -*it << "\n";
            tickets.erase(it);
        }
    }
    return 0;
}
