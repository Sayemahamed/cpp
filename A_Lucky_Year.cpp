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
    long long num,zeroCount=0;
    unsigned long long firstDigit;
    cin>>num;
    long long temp=num;
    while(temp){
        if(temp<10 and temp>0)firstDigit=(unsigned long long)temp;
        temp/=10;
        zeroCount++;
    }
    firstDigit++;
    while(--zeroCount)firstDigit*=10;
    cout<<firstDigit-num<<endl;
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