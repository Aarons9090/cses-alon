#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <unordered_set>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    list<long int> vec;

    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
    }
    auto it = vec.begin();
    it++;

    while (vec.size() != 0)
    {
        if (vec.size() == 1)
        {
            cout << *vec.begin() << endl;
            break;
        }

        cout << (*it) << endl;
        it = vec.erase(it);

        if (it == vec.end())
        {
            it = vec.begin();
            it++;
        }
        else if (*it == *vec.rbegin())
        {

            it = vec.begin();
        }
        else
        {
            ++it;
        }
    }
    return 0;
}
