#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;
        if (str.find("7") != str.npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}