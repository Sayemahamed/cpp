#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numbers, flag = true;
        cin >> numbers;
        set<long long> data;
        vector<long long> dat(numbers);
        for (auto &&it : dat)
        {
            cin >> it;
            data.insert(it);
        }
        for (long long i = 0; i < numbers; i++)
        {
            if (dat[i] != dat[numbers - 1 - i])
            {
                flag = false;
                break;
            }
        }
        if (data.size() <= 2 or flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}