#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        char a;
        cin >> a;
        if (a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}