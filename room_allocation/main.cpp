#include <bits/stdc++.h>

using namespace std;

int main()
{

    long int n = 0;
    map<int, pair<int,int>> mappi;
    map<int, pair<int,int>>::iterator it;
    vector<pair<pair<int,int>, int>> numbers;
    vector<int> used_rooms;

    cin >> n;

    long long int start;
    long long int end;


    for(long int i = 0; i<n; ++i){
         cin >> start;
         cin >> end;

         numbers.push_back({{start,end},i});

    }

    sort(numbers.begin(), numbers.end());


    for(auto& p : numbers){
        start = p.first.first;
        end = p.first.second;

        if(mappi.size() == 0){
            mappi.insert({1, {start,end}});
            used_rooms.push_back(1);
            p.second = 1;
        }else{
            for(it = mappi.begin(); it != mappi.end(); ++it){
                if(it->second.second < start){
                    it->second.first = start;
                    it->second.second = end;
                    used_rooms.push_back(it->first);
                    p.second = it->first;
                    break;
                }
            }

            if(it == mappi.end()){
                mappi.insert({mappi.size()+1, {start, end}});
                used_rooms.push_back(it->first);
                p.second = it->first;
            }
        }


    }
//    cout << mappi.size() << endl;

//    for(int i : used_rooms){
//        cout << i << " ";
//    }
    for(auto &p: numbers){
        cout << p.first<< p.second.first << p.second.second << endl;
    }
}
