#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long a, b,i=1;
        cin >> a >> b;
        if(b<a)
        {
            b*= (a+b-1)/b;
        }
        cout << (b + a - 1) / a << endl;
    }
}