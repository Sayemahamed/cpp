#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size;
        cin >> size;
        vector<long long> data(size);
        for (auto &it : data)
            cin >> it;
        while (data.size())
        {
            {
                cout << data.front() << " ";
                data.erase(data.begin());
            }
            if (data.size())
            {
                cout << data.back() << " ";
                data.pop_back();
            }
        }
        cout << endl;
    }
}