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

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz, i = 1, j, cnt = 0;
    cin >> siz;
    j = (siz << 1);
    queue<long long> ans1;
    stack<long long> ans2;
    while (true)
    {
        if (cnt == siz * 2)
            break;
        ans2.push(j--);
        cnt++;
        if (cnt == siz * 2)
            break;
        ans1.push(j--);
        cnt++;
        if (cnt == siz * 2)
            break;
        ans2.push(i++);
        cnt++;
        if (cnt == siz * 2)
            break;
        ans1.push(i++);
        cnt++;
        if (cnt == siz * 2)
            break;
    }
    while (!ans1.empty())
    {
        cout << ans1.front() << ' ';
        ans1.pop();
    }
    cout << endl;
    while (!ans2.empty())
    {
        cout << ans2.top() << ' ';
        ans2.pop();
    }
    cout << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}