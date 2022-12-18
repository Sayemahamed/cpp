#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long length, temp = 0;
        cin >> length;
        string s, s1, s2;
        cin >> s;
        s1 = s;
        s2 = s;
        for (long long i = 0; i < length; i++)
        {
            if (s1[i] == '(')
            {
                temp++;
                s1[i] = '0';
            }
            else if (temp)
            {
                s1[i] = '0';
                temp--;
            }
        }
        temp = 0;
        for (long long i = length - 1; i >= 0; i--)
        {
            if (s2[i] == ')')
            {
                temp++;
                s2[i] = '0';
            }
            else if (temp)
            {
                s2[i] = '0';
                temp--;
            }
        }
        cout << min(count(s1.begin(), s1.end(), ')'), count(s2.begin(), s2.end(), '(')) << endl;
    }
}