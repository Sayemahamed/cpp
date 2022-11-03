#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long shelves, books, boxLimit;
        cin >> shelves >> books >> boxLimit;
        cout << shelves * ((books + boxLimit - 1) / boxLimit) << endl;
    }
}