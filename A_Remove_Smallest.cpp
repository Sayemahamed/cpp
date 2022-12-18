#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numbers, flag = false;
        cin >> numbers;
        vector<long long> data(numbers);
        for (auto &i : data)
            cin >> i;
        sort(data.begin(), data.end());
        for (long long i = 1; i < numbers; i++)
        {
            if (data[i] - data[i - 1] > 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}