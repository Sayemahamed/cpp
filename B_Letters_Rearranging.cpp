#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    for (long long i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length() - 1 - i])
            return false;
    }
    return true;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        char c = s[0];
        if (all_of(s.begin(), s.end(), [c](char a)
                   { return a == c; }))
            cout << -1 << endl;
        else if (isPalindrome(s))
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
            cout << s << endl;
    }
}