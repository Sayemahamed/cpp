#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long a, qCount = 0;
        cin >> a;
        string s;
        cin >> s;
        // cout <<s<< endl;
        for (auto &it : s)
        {
            if (it == 'Q')
                qCount++;
            else
                qCount--;
        }
        if (qCount <= 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}