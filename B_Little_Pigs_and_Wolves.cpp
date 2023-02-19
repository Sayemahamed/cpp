#include <bits/stdc++.h>
using namespace std;
long long row, column;
bool ok(long long r, long long c)
{
    return 0 <= r && 0 <= c && r < row && c < column;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ans = 0;
    cin >> row >> column;
    char forest[row][column];
    for (auto &it : forest)
    {
        cin >> it;
    }
    for (long long i = 0; i < row; i++)
    {
        for (long long j = 0; j < column; j++)
        {
            if (forest[i][j] == 'W')
            {
                if (ok(i, j + 1))
                {
                    if (forest[i][j + 1] == 'P')
                    {
                        forest[i][j + 1] = '.';
                        ans++;
                        continue;
                    }
                }
                if (ok(i - 1, j))
                {
                    if (forest[i - 1][j] == 'P')
                    {
                        forest[i - 1][j] = '.';
                        ans++;
                        continue;
                    }
                }
                if (ok(i, j - 1))
                {
                    if (forest[i][j - 1] == 'P')
                    {
                        forest[i][j - 1] = '.';
                        ans++;
                        continue;
                    }
                }
                if (ok(i + 1, j))
                {
                    if (forest[i + 1][j] == 'P')
                    {
                        forest[i + 1][j] = '.';
                        ans++;
                        continue;
                    }
                }
            }
        }
    }
    cout << ans;
}