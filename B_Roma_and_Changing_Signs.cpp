#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sell, canChange;
    cin >> sell >> canChange;
    vector<long long> data(sell);
    for (auto &it : data)
        cin >> it;
    for (auto &it : data)
    {
        if (canChange)
        {
            if (it <= 0)
                it *= -1, canChange--;
        }
        else
            break;
    }
    sort(data.begin(),  data.end());
    if(canChange)
    {
        if(canChange&1)
        data[0]*=-1;
        else;
    }
    cout << accumulate(data.begin(), data.end(), 0) << endl;
}