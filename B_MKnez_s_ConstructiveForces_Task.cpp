#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long x;
        cin >> x;
        if (x & 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            float i=1;
            cout << "YES" << endl;
            while (x--)
            {
                if (x & 1)
                    cout << (int)i<< ' ';
                else
                    cout <<-(int)i << ' ';
                    i+=0.5;
            }
            cout<<endl;
        }
    }
}