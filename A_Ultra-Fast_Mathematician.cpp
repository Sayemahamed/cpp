#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    long long temp = 0, i = s1.length() - 1, j = s2.length() - 1;
    while (i >= 0 or j >= 0)
    {
        if (i >= 0)
            temp += (s1[i--] - '0');
        if (j >= 0)
            temp += (s2[j--] - '0');
        if (temp & 1)
            cout << 1;
        else
            cout << 0;
        temp--;
    }
}