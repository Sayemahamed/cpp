#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long siz, oddCount = 0, evenCount = 0;
    cin >> siz;
    while (siz--)
    {
        long long x;
        cin >> x;
        if (x & 1)
            oddCount++;
        else
            evenCount++;
    }
    if (oddCount & 1)
        cout << oddCount << endl;
    else
        cout << evenCount << endl;
}