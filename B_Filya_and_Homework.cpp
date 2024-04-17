#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long elements, flag = true;
    cin >> elements;
    long long element[elements];
    set<long long> data;
    for (long long i = 0; i < elements; i++)
    {
        cin >> element[i];
        data.insert(element[i]);
    }
    if (data.size() > 3)
        flag = false;
    if (data.size() == 3)
    {
        vector<long long> temp;
        for (auto &it : data)
        {
            temp.push_back(it);
        }
        if (temp[0] + temp[2] != 2 * temp[1])
            flag = false;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}