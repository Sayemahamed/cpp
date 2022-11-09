#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numberOfElements;
        cin >> numberOfElements;
        long long element[numberOfElements], ans[numberOfElements];
        for (long long i = 0; i < numberOfElements; i++)
        {
            cin >> element[i];
            ans[i] = element[i];
        }
        if (numberOfElements == 1)
        {
            cout << -1 << endl;
            continue;
        }
        sort(ans, ans + numberOfElements);
        for (long long i = 0; i < numberOfElements; i++)
        {
            if (i != numberOfElements - 1)
            {
                if (ans[i] == element[i])
                {
                    swap(ans[i], ans[i + 1]);
                }
            }
            else
            {
                if (ans[i] == element[i])
                    swap(ans[i], ans[i - 1]);
            }
        }
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}