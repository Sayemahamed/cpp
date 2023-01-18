#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, place, i = 0;
    cin >> size >> place;
    if (place < 0)
        place = 0;
    vector<long long> data(size);
    for (auto &it : data)
        cin >> it;
    while ((i < size) and (data[i] >= data[place-1] and data[i] > 0))
        i++;
    cout << i << endl;
}