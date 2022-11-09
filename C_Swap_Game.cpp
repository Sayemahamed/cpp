#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long elements, allFlag = true, mx = 0;
        cin >> elements;
        long long element[elements];
        for (long long i = 0; i < elements; i++)
            cin >> element[i];
        for (long long i = 0; i < elements; i++)
        {
            if (i != 0)
                if (element[i] != element[i - 1])
                    allFlag = false;
            if (mx < element[i])
                mx = element[i];
        }
        if (!allFlag)
        {
            if (mx == element[0])
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
        else
            cout << "Bob" << endl;
    }
}