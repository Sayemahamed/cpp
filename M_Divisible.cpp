#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long rem, k, cal = 0;
    cin >> s >> k;

    for (int i = 0; i < s.size(); i++)
    {
        rem = (s[i] - 48);
        cal *= 10;
        cal += rem;
        if (cal % k == 0)
        {
            cal = 0;
        }
        else
        {
            cal = cal % k;
        }
    }
    if (cal != 0)
        cout << "NO";
    else
        cout << "YES";
}