#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, flag = true;
    cin >> n;
    while (true)
    {
        if (flag)
        {
            cout << "I hate ";
            flag = false;
        }
        else
        {
            cout << "I love ";
            flag = true;
        }
        --n;
        if (n == 0)
        {
            cout << "it";
            break;
        }
        cout << "that ";
    }
}