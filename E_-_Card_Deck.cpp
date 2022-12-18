#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long cardNumber;
        cin >> cardNumber;
        vector<long long> cards(cardNumber + 1), index(cardNumber + 1);
        for (long long i = 1; i <= cardNumber; i++)
        {
            cin >> cards[i];
            index[cards[i]] = i;
        }
        for (long long i = cardNumber; i >= 0; i--)
        {
            if (index[i])
                for (long long j = index[i]; j <= cardNumber; j++)
                {
                    if (index[cards[j]])
                    {
                        cout << cards[j] << " ";
                        index[cards[j]] = false;
                    }
                    else
                        break;
                }
        }
        cout << endl;
    }
}