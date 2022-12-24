#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tes;
    cin >> tes;
    while (tes--)
    {
        string s;
        cin >> s;
        long long oCount, ount,tem;
        oCount = count(s.begin(), s.end(), '0');
        tem= s.size() - oCount;
        ount = min(oCount,tem);
        if (ount & 1 and ount)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
}