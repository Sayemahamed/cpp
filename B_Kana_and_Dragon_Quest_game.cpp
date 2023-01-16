#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long hp, voaid, lightning;
        cin >> hp >> voaid >> lightning;
        while ((hp>>1) >= 10 and voaid)
        {
            hp>>= 1;
            hp += 10;
            voaid--;
        }
        if (hp <= (lightning * 10))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}