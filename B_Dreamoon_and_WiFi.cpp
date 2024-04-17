#include <bits/stdc++.h>
using namespace std;
long long findFact(int num)
{
    int i = 1, fact = 1;
    while (i <= num)
    {
        fact = i * fact;
        i++;
    }
    return fact;
}
int findNPR(int n, int r)
{
    long long numerator, denominator;
    numerator = findFact(n);
    denominator = findFact(n - r);
    return (numerator / denominator);
}
int findNCR(int n, int r)
{
    int npr, ncr;
    npr = findNPR(n, r);
    ncr = npr / findFact(r);
    return ncr;
}

int main()
{
    long long qCount = 0, minCount = 0;
    string sent, received;
    double ans = 0;
    cin >> sent >> received;
    for (auto &&it : sent)
    {
        if (it == '-')
            minCount++;
    }
    for (auto &&it : received)
    {
        if (it == '-')
            minCount--;
        if (it == '?')
            qCount++;
    }
    if (minCount >= 0 and minCount <= qCount)
        cout << fixed << setprecision(12) << (double)(findNCR(qCount, minCount)) / (1 << qCount) << endl;
    else
        cout << fixed << setprecision(12) << ans << endl;
}