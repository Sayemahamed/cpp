
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    int count = 0;
    char c;
    char cur_c;
    cin >> n >> m >> c;
    bool chars[26] = {false};
    char d[n][m];
    int temp_char;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> cur_c;
            d[i][j] = cur_c;
            if (cur_c == c)
            {
                if (i != 0 && d[i - 1][j] != '.' && d[i - 1][j] != c)
                {
                    temp_char = (int)d[i - 1][j];
                    if (chars[temp_char % 26])
                        continue;
                    count++;
                    chars[temp_char % 26] = true;
                }
                if (j != 0 && d[i][j - 1] != '.' && d[i][j - 1] != c)
                {
                    temp_char = d[i][j - 1];
                    if (chars[temp_char % 26])
                        continue;
                    count++;
                    chars[temp_char % 26] = true;
                }
            }
            else if (cur_c != '.')
            {
                if (chars[((int)cur_c) % 26])
                    continue;
                if (i != 0 && d[i - 1][j] == c)
                {
                    count++;
                    chars[((int)cur_c) % 26] = true;
                }
                else if (j != 0 && d[i][j - 1] == c)
                {
                    count++;
                    chars[((int)cur_c) % 26] = true;
                }
            }
        }
    }
    cout << count;
}
