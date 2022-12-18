#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long first, second, i = 0;
    cin >> first >> second;
    vector<long long> data1(first);
    for (auto &i : data1)
        cin >> i;
    while (second--)
    {
        long long x;
        cin >> x;
        while (data1[i] < x and i < first)
        {
            i++;
        }
        cout<< i <<' ';
    }
}