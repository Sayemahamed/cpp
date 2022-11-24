#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long problem, query, preSum = 0, preValue = 0,flag=false;
    cin >> problem >> query;
    map<long long, long long> update;
    vector<long long> data(problem);
    for (long long i = 0; i < problem; ++i)
    {
        cin >> data[i];
    }
    for(auto&it:data)preSum+=it;
    while (query--)
    {
        long long type;
        cin >> type;
        if (type == 1)
        {
            long long index, value;
            cin >> index >> value;
            if (update.find(index) == update.end())
            {
                if (flag)
                {
                    preSum += value - preValue;
                    update[index] = value;
                }
                else
                {
                    preSum += value - data[index - 1];
                    update[index] = value;
                }
            }
            else
                preSum += value - update[index];
        }
        else
        {
            flag=true;
            long long value;
            cin >> value;
            preSum = value * problem;
            preValue= value;
        }
        cout << preSum << endl;
    }
}