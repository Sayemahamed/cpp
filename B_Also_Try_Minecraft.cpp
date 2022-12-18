#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long columns, tasks;
    cin >> columns >> tasks;
    vector<long long> data(columns, 0), preDamage(columns, 0), PostDamage(columns, 0);
    for (long long i = 0; i < columns; i++)
    {
        cin >> data[i];
        if (i)
        {
            if (data[i] < data[i - 1])
                preDamage[i] = data[i - 1] - data[i];
            else
                PostDamage[i] = data[i] - data[i - 1];
            preDamage[i] += preDamage[i - 1];
            PostDamage[i] += PostDamage[i - 1];
        }
    }
    for (long long i = 0; i < tasks; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (y > x)
            cout << preDamage[y - 1] - preDamage[x - 1] << endl;
        else
            cout << PostDamage[x - 1] - PostDamage[y - 1] << endl;
    }
}