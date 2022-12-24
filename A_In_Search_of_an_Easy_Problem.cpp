#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, flag = false;
    cin >> n;
    while (n--)
    {
        bool a;
        cin >> a;
        if (a)
            flag = true;
    }
    if (flag)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}