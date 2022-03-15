#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void IncreaseArrRecr(long long int &counter, vector<long int> &vec)
{

    if (vec.size() != 1)
    {
        if (vec[0] <= vec[1])
        {

            vec.erase(vec.begin());
            IncreaseArrRecr(counter, vec);
        }
        else
        {
            long int i = vec[0] - vec[1];
            vec[1] += i;
            counter += i;

            IncreaseArrRecr(counter, vec);
        }
    }
}

int main()
{
    long int n;
    long long int counter = 0;
    long int input;

    cin >> n;

    std::deque<long int> vec;

    for (long int i = 0; i < n; ++i)
    {
        cin >> input;
        vec.push_back(input);
    }

    // IncreaseArrRecr(counter, vec);

    while (true)
    {
        if (vec.size() != 1)
        {
            if (vec[0] <= vec[1])
            {

                vec.pop_front();
            }
            else
            {
                long int i = vec[0] - vec[1];
                vec[1] += i;
                counter += i;
            }
        }
        else
        {
            break;
        }
    }

    cout << counter << endl;
}
