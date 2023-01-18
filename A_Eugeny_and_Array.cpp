#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long arrSize, query;
    cin >> arrSize >> query;
    vector<long long> posData(arrSize, 0), negData(arrSize, 0);
    for (long long i = 0; i < arrSize; i++)
    {
        bool x;
        cin >> x;
        if (x)
        {
            if (i)
            {
                posData[i] = posData[i - 1] + 1;
                negData[i] = negData[i - 1];
            }
            else
                posData[i] = 1;
        }
        else
        {
            if (i)
            {
                posData[i] = posData[i - 1];
                negData[i] = negData[i - 1] + 1;
            }
            else
                negData[i] = 1;
        }
    }
    while (query--)
    {
        long long x, y;
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        cout << posData[y - 1] - posData[x - 1] - negData[y - 1] + negData[x - 1] << endl;
    }
}