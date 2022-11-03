#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long degree;
        cin >> degree;
        if (!(180 < degree))
        {
            if ((360 % (180 - degree)))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}