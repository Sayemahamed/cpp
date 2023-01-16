#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, flag = true;
    cin >> size;
    string maze[size];
    for (auto &it : maze)
        cin >> it;
    for (long long i = 1; i < size - 1; i++)
    {
        for (long long j = 1; j < size - 1; j++)
        {
            if (maze[i][j] == '.' and maze[i - 1][j] == '.' and maze[i][j - 1] == '.' and maze[i + 1][j] == '.' and maze[i][j + 1] == '.')
            {
                maze[i][j] = '#';
                maze[i - 1][j] = '#';
                maze[i][j - 1] = '#';
                maze[i + 1][j] = '#';
                maze[i][j + 1] = '#';
            }
        }
    }
    for (auto &it : maze)
    {
        for (auto &it2 : it)
            if (it2 == '.')
                flag = false;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}