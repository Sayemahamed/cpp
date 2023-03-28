#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //
long long numberOfNodes, ans = 0, mxNode;
vector<long long> Edges[10007];
bool isVisited[10007];
void DFS(long long idx, long long length)
{
    if (isVisited[idx])
        return;
    isVisited[idx] = true;
    if (ans < length)
    {
        ans = length;
        mxNode = idx;
    }
    for (auto &child : Edges[idx])
        DFS(child, length + 1);
}
void clear()
{
    for (long long i = 1; i < numberOfNodes; i++)
        isVisited[i] = false;
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    cin >> numberOfNodes;
    for (long long i = 1; i < numberOfNodes; i++)
    {
        long long u, v;
        cin >> u >> v;
        Edges[u].push_back(v);
        Edges[v].push_back(u);
    }
    DFS(1, 0);
    clear();
    DFS(mxNode, 0);
    cout << ans << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}