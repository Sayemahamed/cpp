#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long elements;
        cin >> elements;
        long long element[elements];
        for (long long i = 0; i < elements; i++)
            cin >> element[i];
        if (element[0] <= *min_element(element+1, element + elements))
            cout << "Bob" << endl;
        else
            cout << "Alice " << endl;
    }
}