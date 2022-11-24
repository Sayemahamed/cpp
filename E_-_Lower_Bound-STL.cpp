#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers;
    cin >> numbers;
    vector<long long> number(numbers);
    for (long long i = 0; i < numbers; i++)
        cin >> number[i];
    long long query;
    cin >> query;
    while (query--)
    {
        long long theNumber;
        cin >> theNumber;
        auto idrator = lower_bound(number.begin(), number.end(), theNumber);
        if (*idrator == theNumber)
            cout << "Yes " << idrator - number.begin() + 1 << endl;
        else
            cout << "No " << idrator - number.begin() + 1 << endl;
    }
}