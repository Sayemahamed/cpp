#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase, k;
    cin >> testCase >> k;
    double x, y, x0, y0, distance=0;
    cin >> x0 >> y0;
    testCase --;
    while (testCase--)
    {
        cin >> x >> y;
        distance += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        x0 = x;
        y0 = y;
    }
    cout << fixed << setprecision(8) << distance * k / 50 << endl;
}