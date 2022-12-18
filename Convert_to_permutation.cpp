#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, flag = false, sum = 0;
        cin >> size;
        vector<long long> data(size);
        vector<long long> index(size + 1);
        for (long long i = 0; i < size; i++)
        {
            cin >> data[i];
            index[data[i]]++;
        }
        for (long long i = 0; i <= size; i++)
        {
            if(i==0)
            sum+=index[i];
            else if(index[i])
            sum+=index[i]-1;
            else
            sum--;
            if(sum<0)
            {
                flag=true;
                break;
            }
        }
        long long ans = (((size + 1) * size) / 2) - accumulate(data.begin(), data.end(), 0);
        if (ans < 0)
            flag = true;
        if (flag)
            cout << -1 << endl;
        else
        {
            cout << ans << endl;
        }
    }
}