#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long number, n, flag = true;
    cin >> number;
    string s;
    n = number;
    while (n)
    {
        s += (n % 10) + '0';
        n /= 10;
    }
    // cout<<s;
    for (auto &it : s)
        if (it != '4' && it != '7')
            flag = false;
    // cout<<"flag: "<<flag;
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (number % 4 == 0 || number % 7 == 0 || number % 44 == 0 || number % 47 == 0 || number % 74 == 0 || number % 77 == 0 || number % 444 == 0 || number % 447 == 0 || number % 474 == 0 || number % 474 == 0 || number % 744 == 0 || number % 744 == 0 || number % 474 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}