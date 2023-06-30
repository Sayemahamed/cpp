#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long aX, aY, bX, bY, cX, cY, x = 0, y = 0;
    cin >> aX >> aY >> bX >> bY >> cX >> cY;
    if (aX < bX and aX < cX) {
        x+=min(bX-aX,cX-aX);
    }
    if (aX > bX and aX > cX) {
        x+=min(aX-bX,aX-cX);
    }
    if (aY > bY and aY > cY) {
        y+=min(aY-bY,aY-cY);
    }
    if (aY < bY and aY < cY) {
        y+=min(bY-aY,cY-aY);
    }
    cout << x + y + 1 << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}