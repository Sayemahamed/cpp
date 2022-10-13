#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long chart ,square;
        cin >> chart >> square;
        if (square>chart)
        {
            cout <<0<<endl;
            continue;
        }
        cout<<(chart/square)*(chart/square)<<endl;
    }
}