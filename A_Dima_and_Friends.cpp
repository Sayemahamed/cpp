#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum = 0, x,an=0;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> x, sum += x;
    for (long long i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n + 1) != 1)
        {
            an++;
        }
    }
    cout<<an;
}