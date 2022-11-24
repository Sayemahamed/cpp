#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long query;
    cin >> query;
    set<long long> data;
    while (query--)
    {
        long long type;
        cin >> type;
        if (type == 1)
        {
            long long value;
            cin >> value;
            data.insert(value);
        }
        else if (type == 2)
        {
            long long value;
            cin >> value;
            data.erase(value);
        }
        else if (type == 3)
        {
            long long value;
            cin >> value;
            if (data.find(value) != data.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}