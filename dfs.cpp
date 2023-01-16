#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<long long> dat[], int a, int find)
{
    if (a == find)
        return true;
    for (auto &it : dat[a])
    {
        if (dfs(dat, it, find) == true)
            return true;
    }
    return false;
}
// void dfs(vector<long long> dat[],int start)
// {
//     cout<<start<<endl;
//     for(auto &it : dat[start])
//     {
//         dfs(dat,it);
//     }
// }
// void bfs(vector<long long> dat[], int a, int find)
// {
//     queue<long long> line;
//     line.push(a);
//     while (line.size())
//     {
//         for (auto &it : dat[line.front()])
//         {
//             line.push(it);
//         }
//         cout << line.front() << endl;
//         line.pop();
//     }
// }
bool bfs(vector<long long> dat[], int a, int find)
{
    queue<long long> line;
    line.push(a);
    while (line.size())
    {
        for (auto &it : dat[line.front()])
        {
            line.push(it);
        }
        if(line.front()==find)return true;
        line.pop();
    }
    return false;
}
int main()
{
    vector<long long> dat[11];
    // dat[1].push_back(6);
    dat[0].push_back(1);
    dat[0].push_back(2);
    dat[0].push_back(3);
    dat[2].push_back(4);
    dat[2].push_back(5);
    dat[3].push_back(6);
    dat[3].push_back(7);
    dat[6].push_back(8);
    dat[6].push_back(9);
    dat[6].push_back(10);
    // cout << dfs(dat, 1, 10);
    // cout<<bfs(dat, 1, 10);
    //bfs(dat, 0, 7);
    cout<<endl;
    // dfs(dat,0,10);
}