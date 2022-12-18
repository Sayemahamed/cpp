#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, one = 0;
        cin >> size;
        string str;
        cin >> str;
        for (auto &it : str)
            if (it == '1')
                one++;
        if (str[0] == '0')
            one++;
            for(long long i = 0; i <size-1; i++)
            {
                if (str[i+1] == '0')cout<<'+';
                else if(one&1)
                {
                    cout<<'+';
                    one--;
                }
                else
                {cout<<'-';one--;}
            }
            cout << endl;
    }
}