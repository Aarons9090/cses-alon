#include <iostream>
#include <vector>
#include <iostream>
#include <deque>
#include <map>

using namespace std;

int main()
{
    long int n;
    long long int counter = 0;
    long int input;

    long int prev_index = 10000000;


    cin >> n;
    // alkio, indexi
    std::map<long int, long int> vec;


    for(long int i = 0; i<n; ++i){
         cin >> input;
         vec.insert({input, i});
    }


    for(auto &pair : vec){

        // jos nykyisen alkion indeksi pienenee -> kierros aloitetaan alusta
        if(pair.second < prev_index){
            counter += 1;
        }

        prev_index = pair.second;

    }


    std::cout << counter << std::endl;

    return 0;
}
