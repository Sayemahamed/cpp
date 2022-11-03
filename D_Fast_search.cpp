#include <bits/stdc++.h>
using namespace std;
long long elements, element[10000000];
long long lowerBound(long long ans)
{
    long long low = 0, high = elements, mid;
    while (high - low > 0)
    {
        mid = (high + low) >> 1;
        if (element[mid] < ans)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}
long long upperBound(long long ans)
{
    long long low = 0, high = elements, mid;
    while (high - low > 0)
    {
        mid = (high + low) >> 1;
        if (element[mid] <= ans)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}
int main()
{
    cin >> elements;
    for (int i = 0; i < elements; i++)
        cin >> element[i];
    sort(element, element + elements);
    long long test;
    cin >> test;
    while (test--)
    {
        long long small, big;
        cin >> small >> big;
        cout << upperBound(big) - lowerBound(small) << ' ';
    }
}