#include <bits/stdc++.h>

using namespace std;

int main()
{

    long int n = 0;
    vector<pair<pair<int, int>, int>> numbers;
    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<pair<pair<int, int>, int>> > q;

    cin >> n;

    long long int start;
    long long int end;
    int max_size = 0;
    int ans[n];

    for (long int i = 0; i < n; ++i)
    {
        cin >> start;
        cin >> end;

        numbers.push_back({{start, end}, i});
    }

    sort(numbers.begin(), numbers.end());

    for (auto &p : numbers)
    {
        if(q.size() != 0){
            // Check if earliest departure is before new customer arrival
            if(q.top().first.first < p.first.first){
                // replace available room
                pair<pair<int, int>, int> new_cust = make_pair(make_pair(p.first.second, p.first.first), q.top().second);
                ans[p.second] = q.top().second;
                q.pop();
                q.push(new_cust);
                continue;
            }
        }
        // no rooms availabe, make new room
        pair<pair<int, int>, int> new_cust = make_pair(make_pair(p.first.second, p.first.first), q.size()+1);
        ans[p.second] = q.size()+1;
        q.push(new_cust);

        // check if new max room size
        if( (int) q.size() > max_size){
            max_size = q.size();
        }
    }

    cout << max_size << endl;
    for(int i = 0; i <n; ++i){
        cout << ans[i] << " ";
    }
    return 0;
}
