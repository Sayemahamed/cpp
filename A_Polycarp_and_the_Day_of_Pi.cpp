#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string s, ans = "314159265358979323846264338327";
        long long i = 0;
        cin >> s;
        while (s[i] == ans[i] and i<30)
            i++;
        cout << i << endl;
    }
}