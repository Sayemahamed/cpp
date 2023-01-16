#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, subString, unique;
        cin >> size >> subString >> unique;
        char prin = 'a', lim = unique + 'a' - 1;
        while (size)
        {
            long long temp = subString;
            prin = 'a';
            while (temp and size)
            {
                if (prin < lim)
                    cout << prin++;
                else
                    cout << prin;
                size--;
                temp--;
            }
        }
        cout << endl;
    }
}