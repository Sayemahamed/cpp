#include <bits/stdc++.h>
using namespace std;
const long long MX = 1e6;
long long card[MX], Index[MX];
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numberOfCard;
        cin >> numberOfCard;
        for (long long i = 1; i <= numberOfCard; i++)
        {
            cin >> card[i];
            Index[card[i]] = i;
        }
        for (long long i = numberOfCard; i > 0; i--)
        {
            if (Index[i])
                for (long long j = Index[i]; j <= numberOfCard; j++)
                {
                    if (Index[card[j]])
                    {
                        cout << card[j] << ' ';
                        Index[card[j]] = false;
                    }
                    else break;
                }
        }
        cout << endl;
    }
}