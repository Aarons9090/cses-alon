#include <iostream>
#include <map>
#include <vector>
#include <algorithm>



using namespace std;

int main()
{
    std::vector<pair<long long int, long long int>> vec;
    long int n = 0;

    cin >> n;

    long long int start;
    long long int end;
    long int counter = 0;

    for(long int i = 0; i<n; ++i){
         cin >> start;
         cin >> end;
         vec.push_back( {end, start} );
    }
    sort(vec.begin(), vec.end());


    long int current = vec.begin()->first;
    counter += 1;

    for(auto& pair : vec){
        if(pair.second >= current){
            counter += 1;
            current = pair.first;
        }
    }

    cout << counter << endl;


    return 0;
}
