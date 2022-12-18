#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long cardsNumber;
        cin >> cardsNumber;
        vector<long long> cards(cardsNumber + 1), index(cardsNumber + 1);
        cards[0] = index[0] = 0;
        for (long long i = 1; i <= cardsNumber; i++)
        {
            cin >> cards[i];
            index[cards[i]] = i;
        }
        for (long long i = cardsNumber; i >= 0; i--)
        {
            if (index[i])
                for (long long j = index[i]; j <= cardsNumber; j++)
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