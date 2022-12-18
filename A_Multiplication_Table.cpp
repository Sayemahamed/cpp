#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long column, number, ans = 0, flag = false;
    cin >> column >> number;
    for (long long i = 1; i <= column; i++)
    {
        if (number % i == 0 and number / i <= column)
            ans++;
    }
    cout << ans << endl;
}