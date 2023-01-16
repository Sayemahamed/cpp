#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, sum1 = 0, sum2 = 0, a = 0, b = 0, j = 0;
    cin >> size;
    vector<long long> dat(size);
    for (auto &it : dat)
        cin >> it;
    j = size - 1;
    for (long long i = 0; i < size; i++)
    {
        if(j<i)break;
        sum1 += dat[i];
        a++;
        while (sum2 < sum1 and j>0 and j>i)
        {
            sum2 += dat[j--];
            b++;
        }
    }
    cout << a << " " << b << endl;
}