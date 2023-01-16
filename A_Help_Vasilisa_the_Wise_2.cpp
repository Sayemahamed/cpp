#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (int i = 1; i < 10; i++)
        for (int j = 1; j < 10; j++)
            for (int k = 1; k < 10; k++)
                for (int l = 1; l < 10; l++)
                {
                    if (i + k == r1 && j + l == r2 && i + j == c1 && k + l == c2 && j + k == d2 && i + l == d1 && i != j && j != k && k != l && i != l && j != l)
                    {
                        return cout << i << ' ' << k << endl
                                    << j << ' ' << l,
                               0;
                    }
                }
    cout << -1;
}