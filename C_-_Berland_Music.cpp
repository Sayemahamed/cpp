#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    for (cin >> test; test; test--)
    {
        long long ratings;
        cin >> ratings;
        vector<long long> songs(ratings), high, low;
        for (long long i = 0; i < ratings; i++)
            cin >> songs[i];
        string s;
        cin >> s;
        long long zeros = count(s.begin(), s.end(), '0');
        // cout << zeros << endl;
        for (long long i = 0; i < ratings; i++)
        {
            if (s[i] == '0' && songs[i] > zeros)
            {
                low.push_back(i);
            }
            if (s[i] == '1' && songs[i] <= zeros)
            {
                high.push_back(i);
            }
        }
        for (long long i = 0; i < low.size(); i++)
        {
            swap(songs[high[i]], songs[low[i]]);
        }
        for (auto &it : songs)
            cout << it << ' ';
        cout << endl;
    }
}