#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ride, covered, one, special;
    cin >> ride >> covered >> one >> special;
    if (one * covered <= special)
        cout << one * ride << endl;
    else
    {
        long long ans = (ride / covered) * special;
        ans += one * (ride % covered);
        cout << min(ans,((ride+covered-1)/covered)*special) << endl;
    }
}