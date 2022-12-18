#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long piles;
    cin >> piles;
    long long pile[piles];
    for (long long i = 0; i < piles; i++)
    {
        cin >> pile[i];
        if (i != 0)
            pile[i] += pile[i - 1];
    }
    long long test;
    cin >> test;
    while (test--)
    {
        long long x;
        cin >> x;
        cout << lower_bound(pile, pile + piles, x) - pile + 1 << endl;
    }
}