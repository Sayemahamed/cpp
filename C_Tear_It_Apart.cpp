#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long ans = INT_MAX;
        string str;
        cin >> str;
        map<char, vector<long long>>frequency;
        for (long long i = 0; i < str.length(); i++)
        {
            frequency[ str[ i ] ].push_back( i );
        }
        for (auto& it : frequency)
        {
            long long tmp = 0;
            for (long long i = 0; i < it.second.size(); i++)
            {
                if (i == 0)tmp = max( (long long)it.second[ i ], (long long)tmp );
                if (i == it.second.size() - 1)tmp = max( (long long)(str.length() - it.second[ i ]) - 1, (long long)tmp );
                else
                    tmp = max( (long long)it.second[ i + 1 ] - it.second[ i ] - 1, (long long)tmp );

            }
            ans = min( ans, tmp );
        }
        long long mainAns = 0;
        while (ans) { mainAns++;ans /= 2; }
        cout << mainAns << endl;
    }
}
