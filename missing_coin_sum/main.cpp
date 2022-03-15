#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{

    vector<unsigned long long int> vec;
    unsigned long long int n;
    cin >> n;
    unsigned long long int input;
    unsigned long long int result = 1;

    for (unsigned long long int i = 0; i < n; ++i)
    {
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    for (unsigned long long int i = 0; i < n && vec[i] <= result; i++)
    {
        result = result + vec[i];
    }

    cout << result << endl;
}
