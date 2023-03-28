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
    long long numberOfTicket, numberOfCustomer;
    cin >> numberOfTicket >> numberOfCustomer;
    multiset<long long> ticket;
    while (numberOfTicket--)
    {
        long long x;
        cin >> x;
        ticket.insert(x);
    }
    while (numberOfCustomer--)
    {
        long long y;
        cin >> y;
        if (ticket.empty())
            cout << -1 << endl;
        else if (ticket.count(y))
        {
            cout << y << endl;
            ticket.erase(ticket.find(y));
        }
        else if (*ticket.begin() > y)
        {
            cout << -1 << endl;
        }
        else
        {
            auto a = ticket.upper_bound(y);
            a--;
            cout << *a << endl;
            ticket.erase(a);
        }
    }
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