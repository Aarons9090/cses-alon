#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    std::string str;
    cin >> str;



    deque<string> deq;

    sort(str.begin(), str.end());

    deq.push_back(str);

    while(std::next_permutation(str.begin(), str.end())){
        deq.push_back(str);
    }

    cout << deq.size() << endl;

    for(auto &s : deq){
        cout << s << endl;
    }



    return 0;
}
