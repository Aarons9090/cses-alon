#include <iostream>
#include <vector>
#include <queue>

int main(){
    long int input;

    std::deque<long int> Q1;
    std::deque<long int> Q2;

    std::deque<long int> numbers;

    std::cin >> input;

    long int sum = input *(input+1)/2;

    if(sum % 2 == 1){
        std::cout<< "NO" << std::endl;
        return;
    }


    return 1;
}
