#include <iostream>
#include <vector>
#include <queue>
#include <set>

int main(){
    long int input;

    std::deque<long int> Q1;
    std::deque<long int> Q2;

    std::deque<long int> numbers;

    std::cin >> input;

    long int sum = input *(input+1)/2;

    if(sum % 2 == 1){
        std::cout<< "NO" << std::endl;
        return 0;
    }

    long int halfway = sum /2;

    for(long int i = input; i >= 1; i--){

        if(i <= halfway){
            Q1.push_back(i);
            halfway -= i;
        }else{
            Q2.push_back(i);
        }
    }

    std::cout << "YES" << std::endl;

    std::cout << Q1.size() << std::endl;
    for(int x : Q1){
        std::cout << x << " ";
    }

    std::cout << std::endl;

    std::cout << Q2.size() << std::endl;
    for(int y : Q2){
        std::cout << y << " ";
    }

    return 0;
}
