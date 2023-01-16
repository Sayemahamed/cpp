#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        if (n == 2)
            cout << -1 << endl;
        else
        {
            long long temp = 0;
            for (long long i = 1; i <= n * n; i += 2)
            {
                if (temp == n)
                {
                    cout << endl;
                    temp = 0;
                }
                cout << i << " ";
                temp++;
            }
            for (long long i = 2; i <= n * n; i += 2)
            {
                if (temp == n)
                {
                    cout << endl;
                    temp = 0;
                }
                cout << i << " ";
                temp++;
            }
            cout<<endl;
        }
    }
}