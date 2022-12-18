#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, temp = 0;
        cin >> size;
        vector<long long> data(size);
        for (long long i = 0; i < size; i++)
        {
            cin >> data[i];
            if (data[i] & 1)
                temp++;
        }
        if (temp & 1)
        {
            bool found = false;
            for (long long i = 0; i < 32; i++)
            {
                for (long long j = 0; j < size; j++)
                {
                    if (!(data[j] & (1 << i)) and (data[j] & 1))
                    {
                        found = true;
                        break;
                    }
                    if ((data[j] & (1 << i)) and !(data[j] & 1))
                    {
                        found = true;
                        break;
                    }
                }
                if (found)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
        else
            cout << 0 << endl;
    }
}